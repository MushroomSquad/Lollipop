import inspect

from aiogram import types
from aiogram.dispatcher import FSMContext, filters
from aiogram.dispatcher.filters.state import State, StatesGroup


class Demo_State(StatesGroup):
    demo = State()


users_commands = {
    "demo_command": ["start", "старт"],
}

users_texts = {
    "demo_text": "Текст",
}

users_callbacks = {
    "demo_query": "inline_demo",
}

users_states = {
    "demo_state": Demo_State.demo,
}


__all__ = [
    "types",
    "FSMContext",
    "filters",
    "inspect",
    "users_commands",
    "users_texts",
    "users_callbacks",
    "users_states",
]
