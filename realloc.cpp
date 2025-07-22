#include <iostream>
#include <cstdlib>

int main(){
    float *ptr, *new_ptr;
    ptr = (float*) malloc(5*sizeof(float));
    if (ptr==NULL)
    {
        std::cout << "Memory allocation failed";
        exit(1);
    }

    // Initializing memory block
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i*1.5;
    }

    // Reallocating memory
    new_ptr = (float*) realloc(ptr, 10*sizeof(float));
    if(new_ptr==NULL)
    {
        std::cout << "Memory reallocation failed";
        exit(1);
    }

    // Initializing re-allocated memory block
    for (int i = 5; i < 10; i++)
    {
        new_ptr[i] = i * 2.5;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << new_ptr[i] << std::endl;
    }
    free(new_ptr);
    return 0;
}
