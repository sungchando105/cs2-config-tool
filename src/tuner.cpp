// tuner.cpp — part of cs2-config-tool.

#include "cs2configtool/tuner.h"

#include <cstdio>

namespace cs2configtool {

Tuner::Tuner(const std::string& config_path)
    : config_path_(config_path) {}

void Tuner::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tuner::run() {
    if (verbose_) std::fprintf(stderr, "[cs2-config-tool] tuner: run\n");
    // core logic lives here
    return true;
}

}  // namespace cs2configtool
