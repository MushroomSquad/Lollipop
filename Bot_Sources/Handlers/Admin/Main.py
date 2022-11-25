from .Settings import *


class Admin_Handlers:
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
    def register_admin_handlers(
        cls,
        dp,
        config,
    ):
        attrs = (getattr(cls.Handlers(), name) for name in dir(cls.Handlers()))
        methods = filter(inspect.ismethod, attrs)
        for method in methods:
            if "_command" in method.__name__:
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    commands=admin_commands[str(method.__name__)],
                )
                continue
            if "_text" in method.__name__:
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    text=admin_texts[str(method.__name__)],
                )
                continue
            if "_query" in method.__name__:
                dp.register_callback_query_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    text=admin_callbacks[str(method.__name__)],
                )
                continue
            if "_state" in method.__name__:
                dp.register_message_handler(
                    method,
                    filters.IDFilter(config.tg_bot.admin_ids),
                    state=admin_states[str(method.__name__)],
                )
                continue
