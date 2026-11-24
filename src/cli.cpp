// cli.cpp — part of cs2-config-tool.

#include "cs2configtool/cli.h"

#include <cstdio>

namespace cs2configtool {

Cli::Cli(const std::string& config_path)
    : config_path_(config_path) {}

void Cli::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cli::run() {
    if (verbose_) std::fprintf(stderr, "[cs2-config-tool] cli: run\n");
    // core logic lives here
    return true;
}

}  // namespace cs2configtool
