// main.cpp — entry point. Wires config and subsystems together.

#include "cs2configtool/settings.h"
#include "cs2configtool/configs.h"
#include "cs2configtool/tuner.h"
#include "cs2configtool/monitor.h"
#include "cs2configtool/cli.h"
#include "cs2configtool/utils.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    cs2configtool::Settings settings = cs2configtool::Settings::load_default();
    cs2configtool::Configs configs(settings.store_path);
    cs2configtool::Tuner tuner(settings.store_path);
    cs2configtool::Monitor monitor(settings.store_path);
    cs2configtool::Cli cli(settings.store_path);
    cs2configtool::Utils utils(settings.store_path);
    std::fprintf(stderr, "[cs2-config-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
