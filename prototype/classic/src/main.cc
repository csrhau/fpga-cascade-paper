#include <iostream>

#include "mesh.h"
#include "boundary_policies.h"
#include "exchange_policies.h"

int main(int argc, char *argv[]) {
  std::cout << "Hello, World!" << std::endl;

  Mesh<WindTunnelBoundaryPolicy, SliceExchangePolicy> mesh;
  mesh.step();
  return 0;
}
