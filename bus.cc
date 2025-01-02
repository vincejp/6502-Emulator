#include "bus.h"

bus::bus(rom* my_rom, ram* my_ram) {
    this->my_ram = my_ram;
    this->my_rom = my_rom;
}
