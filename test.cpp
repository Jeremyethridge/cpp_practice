#include <msp430.h>

int a[5] = {0xAAAA, 0xBBBB, 0xCCCC, 0xDDDD}; // Global variable initialized (.data + .const ) RAM + FLASH
const int b[5] = { 0xBBBB, 0xBBBB, 0xBBBB, 0xBBBB }; // Constant variable (.const) FLASH 
int c[5]; // Global variable not initialized (.bss) RAM

