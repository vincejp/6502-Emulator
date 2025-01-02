#ifndef RAM_H
#define RAM_H
#include "device.h"
#include <string>
class ram : public device {
public:
  ram(uint16_t start, uint16_t end);
  void load_ram(std::string filename);
  void ram_dump();
  uint16_t get_start();
  uint16_t get_end();
};
#endif
