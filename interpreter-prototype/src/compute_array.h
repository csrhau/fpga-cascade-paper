#ifndef CASCADE_WISPSIM_COMPUTEARRAY_H
#define CASCADE_WISPSIM_COMPUTEARRAY_H

#include <iostream> 

template <typename ElementType>
class ComputeArray {
    
  
  public:
    
    ComputeArray(int width_, int depth_) : _elements(width_ * depth_) {}

    void cycle(){
      std::cout << "Array Cycling" << std::endl;
      for (auto& element : _elements) {
        element.update();
      }
      for (auto& element : _elements) {
        element.commit();
      }
    }
  private:
    std::vector<ElementType> _elements;
};

#endif
