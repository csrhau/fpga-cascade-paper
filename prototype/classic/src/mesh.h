#ifndef CASCADE_MESH_H
#define CASCADE_MESH_H

#include <iostream>

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
