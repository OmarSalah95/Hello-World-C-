#include <iostream>

#include <string>
// I know about how to "using namespace std;"


class Person
{
private:
    std::string name;
    int age;
    int weight;

public:
    void getName();
    void getAge();
    void getWeight();
    Person(std::string name, int age, int weight);

protected:
    void setAge();
    void setName();
    void setWeight();
    
    
};




int main()
{
    
    char cornyMsg[] = "Hello World!";
    const std::string  newString = "Another way of handling strings!";
    int newStrLength;
    newStrLength = newString.length();
    
    std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << std::endl;
    std::cout << "*                   Greetings:                   *" << std::endl;
    std::cout << "*                  "<<cornyMsg<<"                  *" << std::endl;
    std::cout << "*        "<<newString<<"        *" << std::endl;
    std::cout << "*      The new String was "<< newStrLength <<" Characters long     *" << std::endl;
    std::cout << "*                                                *" << std::endl;
    std::cout << "*                                                *" << std::endl;
    std::cout << "*                                                *" << std::endl;
    std::cout << "*                                                *" << std::endl;
    std::cout << "*                                                *" << std::endl;
    std::cout << "*                                                *" << std::endl;
    std::cout << "*                                                *" << std::endl;
    std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << std::endl;
    
    return 0;
}