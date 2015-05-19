# fpga-cascade
## Concept

This project proposal is based around the idea of streamed-blocking (time/space decomposition approach).
Although this approach was not well suited to Software implementation, the fact it models the F.E.M as 
a pipeline process may make it more amenable to FPGA implementation.

Two potential architectures occur at present. The first would see a machine with a large RAM and FPGA 'scan'
the FPGA across the simulation area, with input vectors being read from the input area and output vectors being
written to it a few indexes behind. The second would see a grid of FPGAs stream data between themselves.


## Concept 2
FPGA Floating Point support and performance are known issues. The circuitry needed to support IEEE floating point is complex and requires too many logical blocks to be a sensible approach on most FPGAs. Fixed point numbers are much easier to represent, but they lack the dynamic range and accuracy of the FP number system. To counter this, the suggestion is preconditioning the simulation mesh such that each cell/element's value sits near the centre of our fixed point representationss value. We devote as many bits to precision as we can, and keep the numeric range of values expected as small as possible. In essence, we partition the space in units of ~1 stuffs, and each time too much stuffs gets into a cell we split it. We AMR the space around the limitations of the fixed point number system.

### Hardware
From a chat with Pete: Nallatech 395 in 2 nodes

# Existing work
http://www.cs.ucla.edu/~pouchet/doc/ics-article.12.pdf Time blocking. N threads wavefront their way through the code.

# Tools
https://eclipse.org/Xtext/ For the DSL. (Also means a switch to java for interpreter.)
