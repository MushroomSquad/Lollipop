from .Demo_MiddleWare import *


def register_all_middlewares(dp):
    middlewares = (Demo_MiddleWare,)
    for middleware in middlewares:
        dp.setup_middleware(middleware)
