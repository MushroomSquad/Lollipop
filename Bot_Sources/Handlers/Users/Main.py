from .Settings import *


class Users_Handlers:
    user_router = Router()

    class Handlers(
        Commands,
        Messages,
        Callbacks,
        States,
    ):
        ...

    @classmethod
    def register_users_handlers(
        cls,
        dp,
        bot,
    ):
        attrs = (getattr(cls.Handlers(), name) for name in dir(cls.Handlers()))
        methods = filter(inspect.ismethod, attrs)
        for method in methods:
            if method.__name__.endswith("_command"):
                cls.user_router.message.register(
                    method,
                    *users_commands[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_message"):
                cls.user_router.message.register(
                    method,
                    *users_messages[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_query"):
                cls.user_router.callback_query.register(
                    method,
                    *users_callbacks[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_state"):
                cls.user_router.message.register(
                    method,
                    *users_states[str(method.__name__)],
                )
                continue
        dp.include_router(cls.user_router)
