#include<iostream>
using namespace std;
template<class T>
 class Add{
    private:
    T n1;

    public:
    Add(T add)
    {
        n1=add;
    }
    T getAdd()
    {
        return n1;
    }
 };
 template<typename T>
 T add(T a, T b){
    return a+b;
 }
 int main()
 {
    Add<int>n1(5);
    Add<float> n2(5.5);
 }