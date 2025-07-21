#include <iostream>
 /* & is used to obtain the memory address of a variable
       * is used to declare a pointer and to access the value at the address the pointer holds
       if * is used at the data type then it is assigning a pointer and if * is used at the variable it dereferences the pointer
    */

int main(){
    int value = 100;
    int valueb = 200;

    int* ptr = &value;
    std::cout << ptr << std::endl;


    // pointers are 8 bytes for 64-bit systems and 4 bytes for 32 bit systems

    ptr = &valueb;
    std::cout << ptr;
    return 0;
}