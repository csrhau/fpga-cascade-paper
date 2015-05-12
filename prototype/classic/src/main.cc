#include <iostream>

#include "config_file.h"
#include "simulation.h"
#include "boundary_policies.h"
#include "exchange_policies.h"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
    return 1;
  }
  ConfigFile config(argv[1]);
  if (config.get_or_default("debug", false)) {
    config.print_config();
  }

  Simulation<WindTunnelBoundaryPolicy, SliceExchangePolicy> simulation(config);
  simulation.start();
  return 0;
}
