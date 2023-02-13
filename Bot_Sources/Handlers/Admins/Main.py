from .Settings import *


class Admin_Handlers:
    class Handlers(
        Commands,
        Messages,
        States,
        Callbacks,
    ):
        pass

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
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    commands=admin_commands[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_message"):
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    text=admin_texts[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_callback"):
                dp.register_callback_query_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    text=admin_callbacks[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_state"):
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    state=admin_states[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_callback_custom"):
                dp.register_callback_query_handler(
                    method,
                    admin_callbacks_custom[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_message_custom"):
                dp.register_message_handler(
                    method,
                    content_types=admin_messages_custom[str(method.__name__)],
                )
                continue
