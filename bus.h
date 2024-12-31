#include "device.h"
#include "ram.h"
#include "rom.h"
#include <stdint.h>

class bus {
public:
  uint8_t read_data(uint16_t addr);
  void write_data(uint16_t addr, uint8_t data);

private:
  // This is a list of devices that are connected to the CPU
  // These can only be accesed through private helper methods
  ram *ram;
  rom *rom;
  uint16_t decode_address(uint16_t addr);
};
