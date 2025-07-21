#include <iostream>
#include <string>

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


    class Employee{
        std::string full_name;

    };

int main(int argc, char **__argv){
    
    Person person;

    std::cout << "What's your name? ";
    std::getline(std::cin, person.name);

    std::cout << "How old are you? ";
    std::cin >> person.age;

    std::cout << "How much do you weight? ";
    std::cin >> person.weight;

    std::cout << "\n--- Entered Information ---\n";
    
    person.enterInformation();
    
    return 0;


    int x = 4;
    int* ptr = &x;
    int** ptr2 = &ptr;

    int y = **ptr2;


}