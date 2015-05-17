#include <utility>

#include "element.h"

Element::Element() {} 

void Element::update() {
  _next = compute(_curr);
}

void Element::commit() {
  std::swap(_curr, _next);
}
