# Notes 
- const signifies to the compiler that the variable is readonly and cannot be modified from the program once initialized
- volatile tells the compiler that a variable's value can change at any time possibly due to external factors outside the programs control
- Both type qualifiers can be used together to describe a variable is a constant to the program but can be modified from the hardware, Sensor. 

# Vocabulary
- Forward Declaration: When an entity informs the compiler of its existence and type without providing a full declaration or implementation

- Pointer (*): A pointer is a variable used to store the memory address of another variable. Pointers can be used with any type. 
Some types of pointers would include Null pointers and Smart pointers. (The thing pointed to by)

- Null pointer: Pointer variable that holds a special value often nullptr or NULL which signifies that it does not point to a valid memory object
Attempting to dereference a null pointer can lead to undefined behavior IE crashes or unexpected results. Common practice to use new and Delete to prevent accidental use of freed memory

- Smart pointer: Designed to automatically manage the memory of the objects they point to, eliminating the need for manual memory allocation and deallocation. When the smart pointer goes out of scope it will automatically deallocate

- Unique pointers (Smart pointer): Ensures that only one unique_ptr can own a particular object at a time. Cannot be copied but can be moved. Transfer ownership to a new unique_ptr, Lightweight, ideal for situations where an object has a single, clear ownership and its lifetime is tied to the owner's scope.

- Shared pointer (Smart pointer): Allow multiple shared_ptr instances to share ownership of the same object. Internally maintains a reference counter and the object is deallocated when the last shared_ptr pointing to is destroyed. Use Case is suitable when multiple parts of a program need to share access to an object and its lifetime depends on all of those references

- Weak pointer (Smart pointer): managed by a shared pointer, doesn't affect reference count, prevents circular references (Breaks circular dependencies), when you need to observe an object managed by the shared_ptr without extending its lifetime.

- Memory - Static vs Dynamic memory allocation. Static allocation is typically a variable that goes on the stack, always in scope of the function that's running it
Heap - Dynamic allocation from the heap through malloc() or sbrk() or other memory allocators you will get a pointer of memory that is out of scope
Static is a fixed size at compilation, dynamic changes. When using malloc() malloc will add more memory for metadata and storing the pointer
Free is used to reclaim memory allocated and it takes in the address to the memory you are trying to free. You don't need to pass free the size of the memory because the memory is stored with Malloc


- Calloc, Malloc, and Realloc

 Calloc - function that returns a pointer to the first byte of the allocated memory block if the allocation succeeds. if size is 0 the value returned depends on the implementation of the library. May or may not be a null pointer

 Malloc - Function that allocates a block of uninitialized memory to a pointer. it is defined in the cstdlib header file.

 Realloc - function that reallocates memory that was previously allocated using malloc, calloc or realloc function and yet not freed using the free function. Parameters are a ptr and new_size (unsigned integral value) returns null pointer if allocation fails or a pointer to the beginning of the reallocated memory block


 2 ways of reallocating memory 
 1. expanding or contracting the same memory block. If the area is expanded the contents of the newly allocated block are undefined
 2. Moving to new location. New memory block of size new_size bytes is allocated. contents of the memory block still are unchanged.

- &: The ampersand symbol acts as the address-of operating and allows you to obtain the memory address of a variable. 

- C99 -  designated initializers for structs and goes by key value pairs

- Class vs Struct - Struct is considered Plain Old Data or Simple Data Aggregates and Class is for object oriented design and Encapsulation

- RAM (Random access memory) - Memory is divided into a text and data segment, Data is static and dynamic, static is uninitialized and initialized, dynamic is stack and heap.

Text segment or code segment contains the instructions for executing the program (readonly)- fixed size, read directly from executable, also stores literals
Static Memory - uninitialized vs initialized - Initialized data segment or data segment holds initialized global and static varables. fixed in size, read directly from executable Read/write excessable, data can be modified. Uninitialized data segment (BSS - Block started by symbol ) fixed size, read/write data in BSS segment is initialzied to 0 BSS can just store the size of the array and the 0s are implicit whereas if its initialized it will be read directly from the executable.

Heap - is variable in size, grows and shrinks as the program runs. Malloc and free in C and New and Delete in C++ for memory. Very useful for dynamic data structures like linked list whos sizes can't be deteremined at compile time.

Stack - manages function calls, local variables, and input arguments. Mimics the stack data structures where things can only be accessed from the top (LIFO). When a function is called its variables and arguments are pushed ontop of the stack. Location is kept track of by the stack pointer. When the function returns it's stack frame is popped from the top of the stack.


.h Files are header files that server as an interface for C source files and it primarily contains declarations of functions, variables, and macros that are intended to be shared and used across multiple source files

.c - implementation file that actual code exist - c code
.s - assembly code 


# Call Graph
Definition: Control Flow Graph which represent calling relationships between subroutines in a computers program

Central module - Calls and directs all other modules. Main.c file

ultrasonic, timer, pwm, motor, light, ir
US module - calsl ultrasonic sensor (HW) (Head of robot)

Timer - GPTM (General purpose timer Module)

PWM (Pulse width modulation) - Servo Motor (Neck) 

Motor - DC Motor (Limbs)

LED 

IR - IR Pair (Tail)


# Flow Chart                    
Foreground Thread                 
- Main                                
- Initialize Modules                    
- Enable Interrupts                     
- Run robot behavior                    

 Background Thread (Interrupt handler or Interrupt service routine (ISR))
 - Only moves downward, enables short and bounded execution time in background thread
 - If statements on directon


 # Assembly Langauge Syntax
 - Four Fields
 Label, Opcode (Operation Code), Operand ; comment
 Init, MOV, RO,#150, ; RO=150

 Label - Used to find the position current instruction in memory. Can use label field to jump to particular instruction

 Opcode - Specifies processor operation to perform

 Operand - Specifies source/destination of data to be processed by opcode

 Comment - Used to explain code meaning

Directives - Assist and control assembly process. Also called pseudo-ops, are not part of the instruction set. Change the way the code is compiled and assembled 

Thumb - Placed at the top of the file to specify that code is generated with Thumb instructions. 
Code - Denotes the section for machine instructions (ROM)
Data - Denotes the section for global variables (RAM)
Area - Instructs the assembler to assemble a new code or data section 
Space - Reserves a block of memory and fills it with zeros. 
Align - Used to ensure next object aligns properly 
Export - to make an object accessible from another file
Global - Same meaning as EXPORT
Import - To access an exported object
End - placed at the end of each file
DCB - Places byte (8-bits) sized constant in memory
DCW - Places a half-word (16-bits) sized constant into memory 
DCD - Places a word (32-bits) sized constant in memory
EQU - To give a symbolic name to a numeric constant
.text - Makes assembly code callable by C 

MOV - Move data within processor without accessing memory
cannot MOV more than 8-bits value
cannot MOV more to high register

Examples: 
R0 = 150 immediate value must be 8-bit
MOV R0,#150 

r1 = r2 copies value from r2 to r1
MOV r1,r2

LDR(Load Data Register) - Loads a register with either 32-bit constant value or another register. Reads 32-bit value from memory to register

LDR R0, =0xFFFF, Loads 0xFFFF into R0
LDR R1,[R2], R1 value pointed to by r2


STR = Stores a register value into memory
STR R0,[R1], Store the value of R0 into R1. First register or Operand is the source and the 2nd is the destination. Opposite for LDR

B - Branch to a location
B loop, Branch to / jump to "LOOP" 

BL - Branch to subroutine
BL Turn_On, Call Turn_on, Turn_On is a subroutine   

BX LR - Return from subroutine call
BLUE_ON mov r2,#001
            BX LR

                                
NOP - No operation, do nothing, STR R0,[R1]  Store the value of R0 into R1, do nothing for 2 cycles 1 NOP = 1 cycle
                                NOP
                                NOP

Tiva C Launchpad TM4C123G microcontroller is used in this course:
Processor : Cortex M4
Flash : 256k
Max Speed : up to 80MHz

Starting with turning on a red led with Assembly and Keil uVision5

Going through schematics for control board

To initialize input/output ports requires 3 steps
1. Activate clock of the port in registers (Page 340)
2. Unlock pin - Only needed for PD7
3. Set direction of pin in DIR register. When set to 0 the pin is an input and 1 is an output(Page 663)
4. Enable piun in DEN register. (682)

Writing/Read data : GPIODATA register (654)

Registers are 32 bits. Bit/Field 31:6 reserved meaning you can't do anything with those bits. These reserved registers are typically for internal use

R5 is used to control Port F 
R4 is used for Port E


If either of these are in use then there needs to be a 1 to enable and provide a clock to GPIO Port # in run mode

GPIO direction register says 0-7 is usable. 

GPIO Digital Enable 0-7 usable. 0 means pin is disabled and 1 means enable


Different types of memory in Microcontrollers - Flash and RAM 
Flash memory is non volatile and RAM is volatile.
If it is volatile that means whatever is stored will stay there when it's powered off and in the RAM it will not be there.
Flash stores code. RAM stores program data
Flash is Static. RAM is Dynamic 
Flash is larger. RAM is smaller