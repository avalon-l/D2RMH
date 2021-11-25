/*
 * Copyright (c) 2021 Soar Qin<soarchin@gmail.com>
 *
 * Use of this source code is governed by an MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT.
 */

#pragma once

#include <string>
#include <vector>
#include <chrono>

std::wstring utf8toucs4(const std::string &s);
std::vector<std::string> splitString(const std::string &str, char c);
void updateTime();
std::chrono::steady_clock::time_point getCurrTime();
