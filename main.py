import asyncio
import logging
import os
from typing import NoReturn

from aiogram import Bot, Dispatcher
from aiogram.fsm.storage.redis import RedisStorage
from aiogram.fsm.storage.memory import MemoryStorage
from Bot_Sources.Bot import Bot_Factory
from Bot_Sources.Handlers import register_all_handlers

logger = logging.getLogger(__name__)


def on_start_up(
    dp,
    config,
) -> None:
    register_all_handlers(
        dp,
        config,
    )


async def main() -> None:
    logging.basicConfig(
        level=logging.INFO,
        format="%(filename)s:%(lineno)d #%(levelname)-8s [%(asctime)s] - %(name)s - %(message)s",
    )
    logger.info("Starting bot")
    config = await Bot_Factory.load_config(".env")

    storage = RedisStorage2() if config.tg_bot.use_redis else MemoryStorage()
    bot = Bot(token=config.tg_bot.token)
    dp = Dispatcher(storage=storage)

    on_start_up(
        dp,
        config,
    )

    try:
        await dp.start_polling(bot)
    finally:
        await dp.storage.close()
        await bot.session.close()


if __name__ == "__main__":
    try:
        asyncio.run(main())
    except (KeyboardInterrupt, SystemExit):
        logger.error("Bot stopped!")
