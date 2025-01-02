#ifndef DEVICE_H
#define DEVICE_H
#include <stdint.h>
class device {
public:
  device(uint16_t start, uint16_t end);
  device();
  ~device();
  void create_memory_space();
  uint16_t get_start_address();
  uint16_t get_end_address();
  void init_memory();
  void mem_dump();
  uint16_t decode_address(uint16_t addr);
  uint16_t start_addr;
  uint16_t end_addr;
  uint8_t *memory;
  uint16_t size;
};

#endif
