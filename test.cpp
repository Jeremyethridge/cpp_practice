#include <iostream>



    float add(int x, int y){
        return (float)(x + y);
    }


int main(){
    float result = add(3,4);
    std::cout << "Result: " << result << std::endl;
    return 0;
}