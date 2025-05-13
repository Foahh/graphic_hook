#pragma once

#include <stddef.h>
#include <stdint.h>
#include <windows.h>

HRESULT dll_hook_push(HMODULE redir_mod, const wchar_t *name);
