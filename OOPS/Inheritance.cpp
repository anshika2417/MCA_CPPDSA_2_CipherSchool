//Inheritance
//It allows us to create a new class(derived/child) from an existing class(base/parent)
//the child class inherits the features from the parent class and can have additional features of its own.

#include<iostream>
using namespace std;
class Animal{
    public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }
    
    protected:
    void protectedMethod(){
        cout<<"Hey"<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Dog is barking"<<endl;
    }
    void hello()
    {
        protectedMethod();
    }
};
int main()
{
    Dog d;
    d.bark();
    d.eat();
    d.hello();
}