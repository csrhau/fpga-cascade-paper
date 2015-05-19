#ifndef CASCADE_WISPSIM_HEATELEMENT_H
#define CASCADE_WISPSIM_HEATELEMENT_H

#include "element.h"


class HeatElement : public Element {
 private:
    State compute(const State& curr_);
};

#endif
