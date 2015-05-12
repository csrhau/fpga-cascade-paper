#ifndef CASCADE_MESH_H
#define CASCADE_MESH_H

#include <iostream>

#include "WindTunnelBoundaryPolicy.H"

// TODO hoist out to seperate classes
class ReflectBoundaryPolicy {
  protected:
    void update_boundaries() {
      std::cout << "Reflecting Boundaries" << std::endl;
    }
};

class SliceExchangePolicy {
  protected:
    void exchange_borders() {
      std::cout << "Exchanging Boundaries in a 1-D fashion " << std::endl;
    }
};

template <typename BoundaryPolicy, typename ExchangePolicy>
class Mesh : private BoundaryPolicy, ExchangePolicy {
  using BoundaryPolicy::update_boundaries;
  using ExchangePolicy::exchange_borders;

  public:
    // Behaviour Method
    void step() {
      update_boundaries();
      exchange_borders();
    }


};
#endif
