from typing import (
    List,
    Dict,
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
from .States import States
from .Callbacks import Callbacks


admin_commands: Dict[str, str] = {}

admin_texts: Dict[str, str] = {}

admin_callbacks: Dict[str, str] = {}

admin_states: Dict[str, object] = {}

admin_callbacks_custom = {}

admin_messages_custom = {}

__all__: List[str] = [
    "types",
    "FSMContext",
    "filters",
    "admin_commands",
    "admin_texts",
    "admin_callbacks",
    "admin_states",
    "admin_callbacks_custom",
    "admin_messages_custom",
]
