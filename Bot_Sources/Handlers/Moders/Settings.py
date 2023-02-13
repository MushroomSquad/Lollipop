import inspect
from typing import Dict

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

moders_commands: Dict[str, str] = {}

moders_texts: Dict[str, str] = {}

moders_callbacks: Dict[str, str] = {}

moders_states: Dict[str, object] = {}

moders_callbacks_custom = {}

moders_messages_custom = {}


__all__ = [
    "inspect",
    "types",
    "FSMContext",
    "filters",
    "Commands",
    "Messages",
    "States",
    "Callbacks",
    "moders_commands",
    "moders_texts",
    "moders_callbacks",
    "moders_states",
    "moders_callbacks_custom",
    "moders_messages_custom",
]
