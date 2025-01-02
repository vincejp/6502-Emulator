#include "device.h"
#include <iostream>

// Base class for a device 
// Devices can be anything like memory, the NES PPU, 
// Functionality for these can be added onto the device, but these are functions that the 
// device must implement as a device

// Copy constructor
device::device(uint16_t start, uint16_t end) {
  this->start_addr = start;
  this->end_addr = end;
  // Allocate one extra byte 
  // Addresses go from start_addr to end_addr, but actual bytes is start + end + 1
  this->size = (start + end + 1);
  this->create_memory_space();
}

// Default constructor
device::device() {
  this->start_addr = 0;
  this->end_addr = 0;
  this->size = 0;
  this->memory = nullptr;
}

device::~device() { delete this->memory; }

void device::create_memory_space() { this->memory = new uint8_t[size];}

uint16_t device::get_start_address() {return this->start_addr;}

uint16_t device::get_end_address() {return this->end_addr;}

uint16_t decode_address(uint16_t addr) {
  // TODO
  // Decode the address so we can find it inside this memory space, and return it
  return 0;
}

// Initializes memory in the address space given for the device to all 0s
void device::init_memory() {
  for (int i = 0; i < this->size; i++) {
    this->memory[i] = 0;
  }
}

// Dump the bytes of memory to the screen
// TODO: Format it better than one line 

void device::mem_dump() {
  for (int i = 0; i < this->size; i++) {
    // Prints out the address first
    printf("%04X: ", i);
    printf("%02X", this->memory[i]);
    printf("\n");
  }
}
