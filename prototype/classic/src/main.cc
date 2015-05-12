#include <iostream>

#include "mesh.H"


int main(int argc, char *argv[]) {
  std::cout << "Hello, World!" << std::endl;

  Mesh<WindTunnelBoundaryPolicy, SliceExchangePolicy> mesh;
  mesh.step();
  return 0;
}
