# CPU (Central Processing Unit)
- ALU (Arithmetic Logic Unit) - Performs arithmetic and logical operations
- ACC (Accumulator) - Stores the results of the arithmetic and logical operations
- GPR (General Purpose Register) - Used for TEMPORARY storage of data during calculations
- CU (Control Unit) - Fetches, decodes, and executes instructions, orchestrating the CPU's activities.
- MDR (Memory Data Register) - Holds data being read from or written to memory
- MAR ( Memory Address register) - Stores the memory address being accessed
- PC (Program Counter) - Keeps track of the memory address of the next instruction to be executed
- IR (Instruction Register) - Holds the current instruction being executed

# Microcontroller Information

## Different types of microcontrollers
1. Ardunio -
2. STM32 - 
3. MSP430 - 
4. PIC - 
5. ESP32 - 

## Architecture
- Memory/Devices - External Memory, Embedded

- Instruction Set - RISC, CISC. 
RISC - Reduced instruction Set computing focuses on smaller, simplier set of instructions, optimized for speed and efficiency
CISC - Complex instruction set computing utilizes a larger, more complex set of instrucctions allow for more operations per instruction but might be a little slower

- Memory Architecture - Harvard, Von Neumann

- Harvard - Flash (Data & Address bus ) to CPU and on the other side RAM (Data & Address bus). Better for parallel processing 
- Von Neumann - Uses a single memory space for both instructions and data. Instructions and data reside in the same memory space accessed by a single address bus or data bus

## Bus Computing
Address bus - Carries the location (Address) of the data being accessed. Tells the memory where to look. CPU to the memory or other components. Unidirectional only carries from CPU to memory
Data bus - Transmits the actual data to or from that location. Provides what to put at the address. bidirectional, data flows in both directions from CPU to memory (Read/Write)
Control bus - Carries the control signals that coordinate the activies of the data and address buses. Read/Write operation and can include timing information. Unidireciton or bidirectional

Example: CPU places the memory address on the address bus, CPU sends a read singal on the control bus, the memory at the address places the data on the data bus, and the CPU receieves the data.

## Bits
1. 8-bit Microcontrollers - interal bus is 8-bits wide and the ALU performs operations on 8 bits at a time. Exp: Intel 8031/8051, PIC1, Motorola MC68HC11. Range: 0x00 to 0xFF or 0 to 255

2. 16-bit Microcontrollers - 16-bits wide. Exp: Extended 8051XA, PIC2x, Intel 8096, Motorola MC68HC2. Range: 0x0000 to 0xFFFF, or 0 to 65535. 

3. 32-bit Microcontollers - 32-bits wides. Typically used in advanced applications like medical devices, engine control systems, office machines, esc. Exp: Intel/Atmel 251 family, PIC3x


# Protocols
- I2C - Inter-integrated Circuit - Serial Protocol for short distance data communications. Synchronous master-slave protocol both master and slaves can send/receieve data (Bidirectional, half duplex) Can run at different speeds 
two wires: Serial Clock (SCL) and Serial Data (SDA)

- SPI - Serial Peripheral Interface - 5 total connections (Including ground), SCLK (Clock), MOSI (Master output slave input), MISO (Master input slave output), SS (Slave Select) what node to communciate with
Send Slave select to low then send clock and data signals. 

- UART (Universal Asynchronous Receiver/Transmitter) - 1 to 1, Asynchronous (1 clock is used), 2 wires, 20 Kbps, ack pins (Rx, Tx) medium power, 15m distance

Full Duplex - Allows simultaneous two-way communication (Phone Call)
Half Duplex - Allows two-way communication but only 1 direction at a time (Walkie-talkie)

Topology (I2C) - Master is connected to one or more slave nodes. Exchange data in the form of frames. Start condition, Slave Address, R/W (function), Ack, Data transmitted, Ack, Stop 
Start condition occurs when a node first pulls SDA low and SCL low. This "Claims the bus" and that node is the master. 
Slave address - Each node has a unique address normally 7 bits long MSB first.

Timing relationship between SDA and SCL - SDA doesn't change between clock rising or falling edge and data is read in the middle of the clock calls. 

Read/Write - 0 master wants to write data to slave, 1 master wants to read data
Ack - 0 is ack and 1 is NACK
Data byte - data being transferred between master and slave (Memory or register content, addresses, esc)
STOP condition - SCL returns high and SDA returns high 

SDA and SCL is connected to voltage (Vcc or Vdd) via a "pull up" resistor
One resistor per line (not per device)
Each I2C device contains logic that can open and close a drain
when drain is "Closed" the line is pulled low (Connected to ground)
When drain is "Open" the line is pulled high (Connected to voltage)
I2C lines are high in the idle state sometimes called an "Open Drain" system

I2C bus speeds (Modes) - Standard = 100 kbps, Fast = 400 Kbps, Fast plus = 1 Mbps, High speed = 3.4 Mbps, Ultra fast = 5 Mbps

