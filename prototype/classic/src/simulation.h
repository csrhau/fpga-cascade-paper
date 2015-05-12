#ifndef CASCADE_SIMULATION_H
#define CASCADE_SIMULATION_H

#include <iostream>
#include <vector>

#include "config_file.h"


template <typename BoundaryPolicy, typename ExchangePolicy>
class Simulation : private BoundaryPolicy, ExchangePolicy {
  using BoundaryPolicy::update_boundaries;
  using ExchangePolicy::exchange_borders;

  private:
    const ConfigFile& _cfg;
    int _nx, _ny;
    std::vector<double> _u0;

    // Behaviour Method
    void step() {
      update_boundaries();
      exchange_borders();
   }

  public:
    Simulation(const ConfigFile& cfg) : _cfg(cfg),
                                        _nx(_cfg.get_or_default("nx", -1)),
                                        _ny(_cfg.get_or_default("ny", -1)),
                                        _u0((_nx + 1) * (_ny + 1)) {

      std::cout << "Created space of length " << _u0.size() << std::endl;

    }

    void start() {
      step();
      step();
      step();
      step();
      step();
    }
};
#endif
