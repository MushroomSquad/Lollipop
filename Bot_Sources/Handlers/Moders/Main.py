from .Settings import *


class Moders_Handlers:
    class Handlers(
        Commands,
        Messages,
        States,
        Queries,
    ):
        pass

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
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    commands=moders_commands[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_message"):
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    text=moders_texts[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_callback"):
                dp.register_callback_query_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    text=moders_callbacks[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_state"):
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    state=moders_states[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_callback_custom"):
                dp.register_callback_query_handler(
                    method,
                    moders_callbacks_custom[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_message_custom"):
                dp.register_message_handler(
                    method,
                    content_types=moders_messages_custom[str(method.__name__)],
                )
                continue
