#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void sound(){
            cout << "Animal makes a sound" << endl;
        }
};

// INHERITANCEC //
class Dog : public Animal{
    public:
        void sound() override{
            cout << "Dog barks" << endl;
        }
};

int main()
{
    Dog* dog = new Dog();
    dog->sound();
    delete dog;
    return 0;
};