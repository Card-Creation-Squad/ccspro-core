#pragma once

#include <utility>

template<typename... Args>
void luaDebug(duel* pduel, const char* format, Args&&... args) {
	pduel->handle_message(pduel->lua->format(format, std::forward<Args>(args)...), OCG_LOG_TYPE_FROM_SCRIPT);
}