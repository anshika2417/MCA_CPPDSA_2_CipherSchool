#include<iostream>
using namespace std;

int func(int num, int num2 = 7 )
{
    return num+num2;
}

int main()
{
    int res = func(2,3);
    cout<<res;
}