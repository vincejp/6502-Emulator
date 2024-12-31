#include "bus.h"

class cpu {
public:
  // Accumulator
  uint8_t acc;

  // Index registers
  uint8_t y_reg;
  uint8_t x_reg;

  // Program counter and stack pointer
  uint16_t pc;
  uint8_t stack_ptr;

  // Flags register
  // NV_BDIZC
  uint8_t flags;

  // Hardware interrupts 
  uint8_t NMI;
  uint8_t IRQ;
  
  // Pointer to the system bus 
  bus* system_bus;

  // CPU utilities 
  uint8_t cpu_read(uint16_t addr);
  void cpu_write(uint16_t addr, uint8_t val);
  void handle_interrupts();
  void increment_pc();
  void get_pc();
  void set_pc(uint16_t addr);
  void cycle();

  /* CPU instructions */
  void ADC(uint8_t addr_mode);
  void AND(uint8_t addr_mode);
  void ASL(uint8_t addr_mode);
  void BCC();
  void BCS();
  void BEQ();
  void BIT(uint8_t addr_mode);
  void BMI();
  void BNE();
  void BPL();
  void BRK();
  void BVC();
  void BVS();
  void CMP(uint8_t addr_mode);
  void CPX(uint8_t addr_mode);
  void CPY(uint8_t addr_mode);
  void DEC(uint8_t addr_mode);
  void EOR(uint8_t addr_mode);
  void INC(uint8_t addr_mode);
  void JMP(uint8_t addr_mode);
  void JSR();
  void LDA(uint8_t addr_mode);
  void LDX(uint8_t addr_mode);
  void LDY(uint8_t addr_mode);
  void LSR(uint8_t addr_mode);
  void ORA(uint8_t addr_mode);
  void ROL(uint8_t addr_mode);
  void ROR(uint8_t addr_mode);
  void SBC(uint8_t addr_mode);
  void STA(uint8_t addr_mode);
  void STX(uint8_t addr_mode);
  void STY(uint8_t addr_mode);

  // Implied addressing mode instructions
  void CLC();
  void CLD();
  void CLI();
  void CLV();
  void DEX();
  void DEY();
  void INX();
  void INY();
  void NOP();
  void PHA();
  void PHP();
  void PLA();
  void PLP();
  void RTI();
  void RTS();
  void SEC();
  void SEI();
  void TAX();
  void TAY();
  void TSX();
  void TXA();
  void TXS();
  void TYA();
};
