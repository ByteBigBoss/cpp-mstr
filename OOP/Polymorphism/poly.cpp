#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};

// INHERITANCE //
class Dog : public Animal
{
    void sound() override
    {
        cout << "OVERRIDE: Dog barks." << endl;
    }
};

int main()
{
    Animal *animal = new Dog(); // POLYMORPHISM //
    animal->sound();
    delete animal;
    return 0;
}