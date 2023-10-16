import inspect

from aiogram import Router
from aiogram import types
from aiogram.fsm.context import FSMContext
from aiogram.fsm.state import State
from aiogram.utils.magic_filter import MagicFilter
from aiogram.filters import Command


from .Commands import Commands
from .Messages import Messages
from .Callbacks import Callbacks
from .States import States


F = MagicFilter()


users_commands: dict[
    str,
    tuple[Command]
    | tuple[MagicFilter]
    | tuple[
        State,
        MagicFilter,
    ],
] = {}

users_messages: dict[
    str,
    tuple[MagicFilter],
] = {}

users_callbacks: dict[
    str,
    tuple[State]
    | tuple[MagicFilter]
    | tuple[
        State,
        MagicFilter,
    ],
] = {}

users_states: dict[
    str,
    tuple[State]
    | tuple[MagicFilter]
    | tuple[
        State,
        MagicFilter,
    ],
] = {}


__all__: list[str] = [
    "inspect",
    "Router",
    "types",
    "FSMContext",
    "Commands",
    "Messages",
    "Callbacks",
    "States",
    "users_commands",
    "users_messages",
    "users_callbacks",
    "users_states",
]
