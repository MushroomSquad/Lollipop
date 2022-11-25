import inspect

from aiogram import types
from aiogram.dispatcher import FSMContext, filters
from aiogram.dispatcher.filters.state import State, StatesGroup


class Demo_State(StatesGroup):
    demo = State()


moders_commands = {
    "demo_command": ["start", "старт"],
}

moders_texts = {
    "demo_text": "Текст",
}

moders_callbacks = {
    "demo_query": "inline_demo",
}

moders_states = {
    "demo_state": Demo_State.demo,
}


__all__ = [
    "types",
    "FSMContext",
    "filters",
    "inspect",
    "moders_commands",
    "moders_texts",
    "moders_callbacks",
    "moders_states",
]
