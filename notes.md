# Notes 
- const signifies to the compiler that the variable is readonly and cannot be modified from the program once initialized
- volatile tells the compiler that a variable's value can change at any time possibly due to external factors outside the programs control
- Both type qualifiers can be used together to describe a variable is a constant to the program but can be modified from the hardware, Sensor. 





# Vocabulary
- Forward Declaration: When an entity informs the compiler of its existence and type without providing a full declaration or implementation

- Pointer (*): A pointer is a variable used to store the memory address of another variable. Pointers can be used with any type. 
Some types of pointers would include Null pointers and Smart pointers. 

- Null pointer: Pointer variable that holds a special value often nullptr or NULL which signifies that it does not point to a valid memory object
Attempting to dereference a null pointer can lead to undefined behavior IE crashes or unexpected results. Common practice to use new and Delete to prevent accidental use of freed memory

- Smart pointer: Designed to automatically manage the memory of the objects they point to, eliminating the need for manual memory allocation and deallocation. When the smart pointer goes out of scope it will automatically deallocate

- Unique pointers (Smart pointer): Ensures that only one unique_ptr cna own a particular object at a time. Cannot be copied but can be moved. Transfer ownership to a new unique_ptr, Lightweight, ideal for situations where an object has a single, clear ownership and its lifetime is tied to the owner's scope.

- Shared pointer (Smart pointer): Allow multiple shared_ptr instances to share ownership of the same object. Internally maintains a reference counter and the object is deallocated when the last shared_ptr pointing to is destroyed. Use Case is suitable when multiple parts of a program need to share access to an object and its lifetime depends on all of those references

- Weak pointer (Smart pointer): managed by a shared pointer, doesn't affect reference count, prevents circular references (Breaks circular dependencies), when you need to observe an object managed by the shared_ptr without extending its lifetime.

- &: The ampersand symbol acts as the address-of operating and allows you to obtain the memory address of a variable.

