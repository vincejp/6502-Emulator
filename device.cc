#include "device.h"

device::device(uint16_t start, uint16_t end, uint16_t size) {
  this->start_addr = start;
  this->end_addr = end;
  this->memory = new uint8_t[size];
  this->size = size;
}

device::~device() { delete this->memory; }
