// Pure Virtual Functions:-
//    If a function doesn't have ant use in the base class but the function must be implemented by all its derived classes

#include<iostream>
using namespace std;

class A{
    public:
    virtual void display()=0;
};

class B:public A{
    public:
    void display()
    {
        cout<<"From class B"<<endl;
    }
};

class C:public A{
    public:
    void display()
    {
        cout<<"From class C"<<endl;
    }
};
int main()
{
    B b1;
    C c1;
    c1.display();

}