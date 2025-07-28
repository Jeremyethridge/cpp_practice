# cpp_practice

## 📘 Introduction
This repository documents my journey learning C++. It contains code examples, exercises, and small projects as I build a strong foundation in the language, with the long-term goal of becoming an embedded software engineer.

## 🎯 Goal
My aim is to transition into embedded software development. I’m excited by the challenge of writing efficient, low-level code that interacts directly with hardware.

## 🔧 Real-World Experience and Relevance
As a Controls Technician, I’ve worked hands-on with HVAC systems—installing and troubleshooting sensors, actuators, and controllers. I've measured voltages, diagnosed control signals, and wired entire systems from schematics. This real-world experience has given me a deep appreciation for how physical hardware behaves and how systems need to respond reliably in the field.

This background is highly relevant to embedded software engineering:
- **Sensors & Actuators**: I understand how devices operate and how software must interact with them through inputs and outputs.
- **Voltage & Signal Measurement**: I've worked directly with analog and digital signals, which are fundamental to embedded development.
- **Control Logic**: I’ve configured programmable controllers and tuned PID loops—skills that translate naturally to embedded control algorithms.
- **Wiring & Schematics**: My familiarity with electrical diagrams and physical wiring makes it easier to understand circuit-level interactions with microcontrollers.

By learning C++, I aim to move from configuring hardware to programming it—bringing both the software and hardware sides together in my work.

## 🛠️ How I'm Learning
I'm building my C++ skills through:
- [C++ Source #1](https://en.cppreference.com/)
- [C++ Source #2](https://devdocs.io/cpp/algorithm/binary_search)
- [C++ Source #3](https://www.geeksforgeeks.org/cpp/cpp-pointers/)
- [Microcontroller information](https://www.geeksforgeeks.org/digital-logic/microcontroller-and-its-types/)
- Video tutorials and educational resources
- Hands-on practice in this repo
- Studying computer architecture and embedded system design


# Courses Completed/in progress
1. Udemy - ARM Cortex-M: Modular Embedded Systems Design
2. Coursera - Introduction to Embedded Machine Learning
2. Coursera - Introduction to Programming the Internet of Things (IOT) Specialization
3. edX - Embedded Systems - Shape the World: Microcontroller Input/Output


# New Project
- Created a new project in uVision


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

Memory Architecture - Harvard, Von Neumann
Harvard - Separate memory spaces for instruction and data. Biggest difference between Harvard and Von Neumann is how the CPU fetches instructions and data.

Von Neumann - Uses a single memory space for both instructions and data. Instructions and data reside in the same memory space accessed by a single address bus or data bus
Address bus - Carries the location (Address) of the data being accessed. Tells the memory where to look. CPU to the memory or other components. Unidirectional only carries from CPU to memory
Data bus - Transmits the actual data to or from that location. Provides what to put at the address. bidirectional, data flows in both directions from CPU to memory (Read/Write)
Control bus - Carries the control signals that coordinate the activies of the data and address buses. Read/Write operation and can include timing information. Unidireciton or bidirectional

Example: CPU places the memory address on the address bus, CPU sends a read singal on the control bus, the memory at the address places the data on the data bus, and the CPU receieves the data.


