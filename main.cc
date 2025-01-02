#include "cpu.h"
#include <iostream>

// TODO: Fix device, ROM, and RAM

int main() {
  // Devices attached to the bus allocate based on addresses 
  // this will allocate 0x0800 bytes for the RAM
  ram* my_ram = new ram(0, 0x07FF);
  rom* my_rom = new rom(0x4020, 0xFFFF);
  std::cout << "RAM start: " << my_ram->get_start() << std::endl;
  std::cout << "RAM end: " << my_ram->get_end() << std::endl;
  my_ram->ram_dump();
  // The bus itself
  bus* system_bus = new bus(my_rom, my_ram);
  // the cpu 
  cpu* system_cpu = new cpu(system_bus);
  // TODO: main loop
}

