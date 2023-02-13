from .Settings import *


class Bot_Factory:
    @dataclass
    class DB_Config:
        host: str
        password: str
        user: str
        database: str

    @dataclass
    class TG_Bot:
        token: str
        admin_ids: list[int]
        use_redis: bool

    @dataclass
    class Miscellaneous:
        other_params: str = None

    @dataclass
    class Config:
        tg_bot: object
        db: object
        misc: object

    @classmethod
    async def load_config(cls, path: str = None) -> object:
        env: object = Env()
        env.read_env(path)

        return cls.Config(
            tg_bot=cls.TG_Bot(
                token=env.str("BOT_TOKEN"),
                admin_ids=list(map(int, env.list("ADMINS"))),
                use_redis=env.bool("USE_REDIS"),
            ),
            db=cls.DB_Config(
                host=env.str("DB_HOST"),
                password=env.str("DB_PASS"),
                user=env.str("DB_USER"),
                database=env.str("DB_NAME"),
            ),
            misc=cls.Miscellaneous(),
        )
