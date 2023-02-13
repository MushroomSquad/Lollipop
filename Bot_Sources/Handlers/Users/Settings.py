import inspect
from typing import (
    Dict,
    List,
)

from aiogram import types
from aiogram.dispatcher import (
    FSMContext,
    filters,
)
from aiogram.dispatcher.filters.state import (
    State,
    StatesGroup,
)

from .Commands import Commands
from .Messages import Messages
from .Callbacks import Callbacks
from .States import States


users_commands: Dict[str, str] = {}

users_texts: Dict[str, str] = {}

users_callbacks: Dict[str, str] = {}

users_states: Dict[str, object] = {}

moders_callbacks_custom = {}

moders_messages_custom = {}

__all__: List[str] = [
    "types",
    "FSMContext",
    "filters",
    "inspect",
    "users_commands",
    "users_texts",
    "users_callbacks",
    "users_states",
    "moders_callbacks_custom",
    "moders_messages_custom",
]
