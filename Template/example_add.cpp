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
    void setSum(T a, T1 b)
    {
        n1=a;
        n2=b;
    }
    T1 getSum()
    {
        return n1+n2;
    }
};
int main()
{
    Add<int,float> n1(5,5.5);
    cout<<n1.getSum()<<endl;
    n1.setSum(4,5.2);
    cout<<n1.getSum();

}