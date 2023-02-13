from .Settings import *


class Users_Handlers:
    class Handlers:
        pass

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
                dp.register_message_handler(
                    method,
                    commands=users_commands[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_text"):
                dp.register_message_handler(
                    method,
                    text=users_texts[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_query"):
                dp.register_callbacks_query_handler(
                    method,
                    text=users_callbacks[str(method.__name__)],
                )
                continue
            elif method.__name__.endswith("_state"):
                dp.register_messages_handler(
                    method,
                    state=users_states[str(method.__name__)],
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
