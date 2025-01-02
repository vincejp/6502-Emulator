#ifndef BUS_H
#define BUS_H

#include "device.h"
#include "ram.h"
#include "rom.h"
#include <stdint.h>
#include <vector>

class bus {
  // This is a list of devices that are connected to the CPU
  // These can only be accesed through private helper methods
  ram *my_ram;
  rom *my_rom;
public:
  uint8_t read_data(uint16_t addr);
  void write_data(uint16_t addr, uint8_t data);
  bus(rom* my_rom, ram* my_ram);

private:
  uint16_t decode_address(uint16_t addr);
};

#endif
