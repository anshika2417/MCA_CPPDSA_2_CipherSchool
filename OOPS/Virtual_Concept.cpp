#include<iostream>
using namespace std;

class Base{
    public:
    virtual void print()
    {
        cout<<"From Base"<<endl;
    }
};

class Derived:public Base{
    public:
    void print() override  //it is just a safety precaution
    {
        cout<<"From Derived"<<endl;
    }
};

int main()
{
    Derived d1;
    Base *ptr=&d1;
    ptr->print();
}
