import asyncio
import logging
import os

from aiogram import Bot, Dispatcher
from aiogram.contrib.fsm_storage.memory import MemoryStorage
from aiogram.contrib.fsm_storage.redis import RedisStorage2
from Bot_Sources.Bots import Bot_Factory
from Bot_Sources.Filters import Admin_Filter, Moders_Filter, Users_Filter
from Bot_Sources.Handlers import register_all_handlers
from Bot_Sources.MiddleWares import register_all_middlewares

logger = logging.getLogger(__name__)


def on_start_up(
    dp,
    config,
) -> None:
    register_all_handlers(
        dp,
        config,
    )
    register_all_middlewares(dp)
    register_all_filters(dp)


async def main() -> None:
    logging.basicConfig(
        level=logging.INFO,
        format="%(filename)s:%(lineno)d #%(levelname)-8s [%(asctime)s] - %(name)s - %(message)s",
    )
    logger.info("Starting bot")
    config = await Bot_Factory.load_config(".env")

    storage = RedisStorage2() if config.tg_bot.use_redis else MemoryStorage()
    bot = Bot(token=config.tg_bot.token)
    dp = Dispatcher(bot, storage=storage)

    bot["config"] = config

    on_start_up(
        dp,
        config,
    )

    try:
        await dp.start_polling()
    finally:
        await dp.storage.close()
        await dp.storage.wait_closed()
        await bot.session.close()


if __name__ == "__main__":
    try:
        asyncio.run(main())
    except (KeyboardInterrupt, SystemExit):
        logger.error("Bot stopped!")
