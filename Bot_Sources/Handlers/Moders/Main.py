from .Settings import *


class Moders_Handlers:
    moders_router = Router()

    class Handlers(
        Commands,
        Messages,
        States,
        Callbacks,
    ):
        ...

    @classmethod
    def register_moders_handlers(
        cls,
        dp,
        config,
    ):
        attrs = (getattr(cls.Handlers(), name) for name in dir(cls.Handlers()))
        methods = filter(inspect.ismethod, attrs)
        for method in methods:
            if method.__name__.endswith("_command"):
                cls.moders_router.message.register(
                    method,
                    *moders_commands[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_message"):
                cls.moders_router.message.register(
                    method,
                    *moders_messages[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_callback"):
                cls.moders_router.callback_query.register(
                    method,
                    *moders_callbacks[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_state"):
                cls.moders_router.message.register(
                    method,
                    *moders_states[str(method.__name__)],
                )
                continue
        dp.include_router(cls.moders_router)
