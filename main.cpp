#include <iostream>

 /* 
    */
struct Person {
        std::string name;
        int age;
        double weight;


        void enterInformation(){
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "Weight: " << weight <<std::endl;
        }
    };


// 

int main(){
    
    Person person;
    person.name = std::cin << "What's your name?" << std::endl;
    person.age = std::cin << "How old are you?" << std::endl;
    person.weight = std::cin << "How much do you weight?" << std::endl;

    person.enterInformation();
    
    return 0;

}