#include<iostream>
using namespace std;

// Multilevel

// class A{

// };
// class B: public A{

// };
// class C : public B{

// };
// int main(){

// }


//Multiple
class A{
    public:
    void print()
    {

    }
};
class B{
    public:
    void print()
    {

    }
};
class C:public A, public B{

};
int main()
{
    C c1;
    c1.A::print(); //we resolve this with scope resolution
}