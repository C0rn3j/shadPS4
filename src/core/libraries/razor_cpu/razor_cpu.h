// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

#include <atomic>
#include <memory>

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::RazorCpu {
void RegisterlibSceRazorCpu(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::RazorCpu