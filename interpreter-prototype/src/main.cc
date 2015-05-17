#include <iostream>
#include <utility>

#include "heat_element.h"
#include "compute_array.h"


int main(int argc, char *argv[]) {

  ComputeArray<HeatElement> array(6, 3);
  for (int i = 0; i < 10; ++i) {
    array.cycle();
  }

}
