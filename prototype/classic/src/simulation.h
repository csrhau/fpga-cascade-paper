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
    int nx;
    int ny;

  public:
    Simulation(const ConfigFile& config) : nx(config.get_or_default("nx", 100)),
                                     ny(config.get_or_default("ny", 100)) {
                                     
                                     
                                     }
    // Behaviour Method
    void step() {
      update_boundaries();
      exchange_borders();
    }
};
#endif
