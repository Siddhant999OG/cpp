// RUNTIME POLYMORPHISM

#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    // Dog D;
    // D.speak();

    Dog* d1 = new Dog;
    d1->speak();

    Animal* A1 = new Animal();
    A1->speak();

    // upcasting
    Animal* a = new Dog();
    a->speak();

    // downcasting
    Dog* b = (Dog*)new Animal();
    b->speak();
}