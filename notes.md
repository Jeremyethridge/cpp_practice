# Notes 
- const signifies to the compiler that the variable is readonly and cannot be modified from the program once initialized
- volatile tells the compiler that a variable's value can change at any time possibly due to external factors outside the programs control
- Both type qualifiers can be used together to describe a variable is a constant to the program but can be modified from the hardware, Sensor. 
- & is used to obtain the memory address of a variable
- * is used to declare a pointer and to access the value at the address the pointer holds
- if * is used at the data type then it is assigning a pointer and if * is used at the variable it dereferences the pointer




# Vocabulary
- Forward Declaration: When an entity informs the compiler of its existence and type without providing a full declaration or implementation

- Pointer (*): A pointer is a variable used to store the memory address of another variable. Pointers can be used with any type. 
Some types of pointers would include Null pointers and Smart pointers. 

- Null pointer: Pointer variable that holds a special value often nullptr or NULL which signifies that it does not point to a valid memory object
Attempting to dereference a null pointer can lead to undefined behavior IE crashes or unexpected results. Common practice to use new and Delete to prevent accidental use of freed memory

- Smart pointer: Designed to automatically manage the memory of the objects they point to, eliminating the need for manual memory allocation and deallocation. When the smart pointer goes out of scope it will automatically deallocate