// monitor.cpp — part of cs2-config-tool.

#include "cs2configtool/monitor.h"

#include <cstdio>

namespace cs2configtool {

Monitor::Monitor(const std::string& config_path)
    : config_path_(config_path) {}

void Monitor::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Monitor::run() {
    if (verbose_) std::fprintf(stderr, "[cs2-config-tool] monitor: run\n");
    // core logic lives here
    return true;
}

}  // namespace cs2configtool
