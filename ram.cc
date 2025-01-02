#include "ram.h"
#include <iostream>

ram::ram(uint16_t start, uint16_t end) {
    start_addr = start;
    end_addr = end;
    this->size = (start + end + 1);
    create_memory_space();
    this->init_memory();
    this->mem_dump();
}

uint16_t ram::get_start() {
    return get_start_address();
}

uint16_t ram::get_end() {
    return get_end_address();
}

void ram::ram_dump() {
    mem_dump();
}
