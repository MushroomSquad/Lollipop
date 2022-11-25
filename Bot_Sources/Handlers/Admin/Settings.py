import inspect

from aiogram import types
from aiogram.dispatcher import FSMContext, filters
from aiogram.dispatcher.filters.state import State, StatesGroup


class Demo_State(StatesGroup):
    demo = State()


admin_commands = {
    "demo_command": ["start", "старт"],
}

admin_texts = {
    "demo_text": "Текст",
}

admin_callbacks = {
    "demo_query": "inline_demo",
}

admin_states = {
    "demo_state": Demo_State.demo,
}


__all__ = [
    "types",
    "FSMContext",
    "filters",
    "inspect",
    "admin_commands",
    "admin_texts",
    "admin_callbacks",
    "admin_states",
]
