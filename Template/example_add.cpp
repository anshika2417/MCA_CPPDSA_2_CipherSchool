#include<iostream>
using namespace std;

template<class T, class T1>
class Add{
    private:
    T n1;
    T1 n2;

    public:
    Add(T add1,T1 add2)
    {
        n1=add1;
        n2=add2;
    }

    T1 getSum()
    {
        return n1+n2;
    }
};
int main()
{
    Add<int,float> n1(5,5.5);
    cout<<n1.getSum();

}