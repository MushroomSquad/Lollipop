from .Admin import Admin_Handlers
from .Moders import Moders_Handlers
from .Users import Users_Handlers


def register_all_handlers(
    dp,
    config,
) -> None:
    handlers = (
        Admin_Handlers.register_admin_handlers,
        Moders_Handlers.register_moders_handlers,
        Users_Handlers.register_users_handlers,
    )
    for handler in handlers:
        handler(
            dp,
            config,
        )
