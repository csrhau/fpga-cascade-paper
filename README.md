# fpga-cascade
fpga-cascade concept

This project proposal is based around the idea of streamed-blocking (time/space decomposition approach).
Although this approach was not well suited to Software implementation, the fact it models the F.E.M as 
a pipeline process may make it more amenable to FPGA implementation.

Two potential architectures occur at present. The first would see a machine with a large RAM and FPGA 'scan'
the FPGA across the simulation area, with input vectors being read from the input area and output vectors being
written to it a few indexes behind. The second would see a grid of FPGAs stream data between themselves.


### Hardware
From a chat with Pete: Nallatech 395 in 2 nodes
