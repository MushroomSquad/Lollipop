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


moders_commands: dict[
    str,
    tuple[Command]
    | tuple[MagicFilter]
    | tuple[
        State,
        MagicFilter,
    ],
] = {}

moders_messages: dict[
    str,
    tuple[MagicFilter],
] = {}

moders_callbacks: dict[
    str,
    tuple[State]
    | tuple[MagicFilter]
    | tuple[
        State,
        MagicFilter,
    ],
] = {}

moders_states: dict[
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
    "moders_commands",
    "moders_messages",
    "moders_callbacks",
    "moders_states",
]
