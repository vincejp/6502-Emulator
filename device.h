#include <stdint.h>

class device {
public:
  uint16_t start_addr;
  uint16_t end_addr;
  uint8_t *memory;
  uint16_t size;
  device(uint16_t start, uint16_t end, uint16_t size);
  ~device();
};
