from .Admin import *
from .Moders import *
from .Users import *


def register_all_filters(dp):
    filters = (
        Admin_Filter,
        Moders_Filter,
        Users_Filter,
    )
    for filter in filters:
        dp.filters_factory.bind(filter)
