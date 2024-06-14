#include<iostream>
using namespace std;

class Base{
    public:
    void print()
    {
        cout<<"From Base"<<endl;
    }
};
class Derieved:public Base{
    public:
    void print()
    {
        cout<<"From Derived"<<endl;
    }
};
int main()
{
    //Derived d;
    //d.Base::print();  //Here we forcefully acess the base class method.


    Derieved d1;
    Base *ptr=&d1; //this is possible
    ptr->print();


    /*Base b1;
    Derieved *ptr = &b1; //this is not possible bcz it will be superior
    */

}