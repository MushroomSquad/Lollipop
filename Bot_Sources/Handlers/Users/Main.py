from .Settings import *


class Users_Handlers:
    class Handlers:
        @classmethod
        async def demo_command(
            cls,
            message: types.Message,
        ):
            pass

        @classmethod
        async def demo_text(
            cls,
            message: types.Message,
        ):
            pass

        @classmethod
        async def demo_query(
            cls,
            call: types.CallbackQuery,
        ):
            pass

        @classmethod
        async def demo_state(
            cls,
            state: FSMContext,
        ):
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
            if "_command" in method.__name__:
                dp.register_message_handler(
                    method,
                    commands=users_commands[str(method.__name__)],
                )
                continue
            if "_text" in method.__name__:
                dp.register_message_handler(
                    method,
                    text=users_texts[str(method.__name__)],
                )
                continue
            if "_query" in method.__name__:
                dp.register_callback_query_handler(
                    method,
                    text=users_callbacks[str(method.__name__)],
                )
                continue
            if "_state" in method.__name__:
                dp.register_message_handler(
                    method,
                    state=users_states[str(method.__name__)],
                )
                continue
