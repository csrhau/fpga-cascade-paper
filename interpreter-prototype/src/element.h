#ifndef CASCADE_WISPSIM_ELEMENT_H
#define CASCADE_WISPSIM_ELEMENT_H

#include <map>
#include <string>
#include <vector>

typedef std::map<std::string, std::vector<double> > State;

class Element {
  public: 
    Element();
    void update();
    void commit();
    const State& getState() const; 
  private:
    State _curr;
    State _next;
    virtual State compute(const State& curr_) = 0;
};

#endif
