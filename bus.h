#include <stdint.h>

// A bus can read or write data to and from a peripheral device
class bus {
  void readData(uint8_t addr, void *device);
  void writeData(uint8_t addr, uint8_t data);
};
