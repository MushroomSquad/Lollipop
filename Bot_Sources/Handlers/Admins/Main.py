from .Settings import *


class Admin_Handlers:
    admins_router = Router()

    class Handlers(
        Commands,
        Messages,
        States,
        Callbacks,
    ):
        ...

    @classmethod
    def register_admin_handlers(
        cls,
        dp,
        config,
    ):
        attrs = (getattr(cls.Handlers(), name) for name in dir(cls.Handlers()))
        methods = filter(inspect.ismethod, attrs)
        for method in methods:
            if method.__name__.endswith("_command"):
                cls.admins_router.message.register(
                    method,
                    *admins_commands[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_message"):
                cls.admins_router.message.register(
                    method,
                    *admins_messages[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_callback"):
                cls.admins_router.callback_query.register(
                    method,
                    *admins_callbacks[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_state"):
                cls.admins_router.message.register(
                    method,
                    *admins_states[str(method.__name__)],
                )
                continue
        dp.include_router(cls.admins_router)
