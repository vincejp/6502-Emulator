CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
LDFLAGS =

SRCS = bus.cc cpu.cc device.cc main.cc ram.cc rom.cc
OBJS = $(SRCS:.cc=.o)
DEPS = bus.h cpu.h device.h ram.h rom.h

TARGET = emulator

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cc $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean