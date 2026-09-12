//  Logger.cpp
//  WithLand
//
//  Copyright (C) 2026 Alexander Sharzhukov
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "../include/common/Logger.hpp"

/*
void Logger::Log(const std::string& message) {
#ifdef WITHLAND_LOG_MODE
    // Log-режим: пишем и в терминал, и в файл
    std::cout << "[LOG] " << message << std::endl;
#endif

    // В обоих режимах пишем в файл (чтобы .app без терминала тоже оставлял след)
    std::ofstream logFile("withland.log", std::ios::app);
    if (logFile.is_open()) {
        logFile << message << "\n";
    }
}
*/