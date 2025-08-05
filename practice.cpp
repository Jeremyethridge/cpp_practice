#include <iostream>

int main()
{
    int x = 0;
    int* ptr = &x;

    int* additon = ptr + 1;

    std::cout << sizeof(ptr) << std::endl;
    std::cout << ptr << std::endl;
    std::cout << additon <<std::endl;
    std::cout << x << std::endl;
}
