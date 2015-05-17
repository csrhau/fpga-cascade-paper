BUILDDIR := build
PRODUCT := wispsim.x

SRCDIR := src

HDRS := $(wildcard $(SRCDIR)/*.h)

CSRCS := $(wildcard $(SRCDIR)/*.cc)

OBJS := $(CSRCS:$(SRCDIR)/%.cc=$(BUILDDIR)/%.o)

BINARY := $(BUILDDIR)/$(PRODUCT)

# gcc flags:
CXX := g++
CXXFLAGS_DEBUG := -g -DDEBUG -Wall -Wextra 
CXXFLAGS_OPT := -std=c++11 -O3
CXXFLAGS_OPENMP := -fopenmp

LD := $(CXX)

# select optimized or debug
#CXXFLAGS := $(CXXFLAGS_OPT) $(CPPFLAGS)
CXXFLAGS := $(CXXFLAGS_OPT) $(CXXFLAGS_DEBUG) $(CPPFLAGS)

# add openmp flags (comment out for serial build)
#CXXFLAGS += $(CXXFLAGS_OPENMP)
#LDFLAGS += $(CXXFLAGS_OPENMP) 

all : $(BINARY)

$(BINARY) : $(OBJS)
	@echo linking $@
	$(maketargetdir)
	$(LD) $(LDFLAGS) -o $@ $^

$(BUILDDIR)/%.o : $(SRCDIR)/%.cc 
	@echo compiling $<
	$(maketargetdir)
	$(CXX) $(CXXFLAGS) $(CXXINCLUDES) -c -o $@ $<

define maketargetdir
	-@mkdir -p $(dir $@) > /dev/null 2>&1
endef

clean :
	rm -f $(BINARY) $(OBJS)
	rm -rf $(BUILDDIR)
