/*
Recursion-> Recursion happens when a function call itself directly or indirectly
eg func(int n)
{
func(n);
}
if the solution of a problem depends on a smaller problem of same type, then we will use recursion
*/

//Two types of recursion -> head recursion: first recursive relation then processing , Tail recursion : first processing then recursive relation

#include<iostream>
using namespace std;

// int goHome(int src, int dest)
// {
//     if(src==dest){
//         return 0;
//     }
//     int a=src++;
//     goHome(a, dest);
//     return src;
// }

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int f=n*fact(n-1);
    return f;
}

int power(int n)
{
    if(n==0) return 1;

    return 2*power(n-1);
}

int fibo(int n)
{
    if(n==0) return 0;
    

    if(n==1) return 1;

    return fibo(n-1)+fibo(n-2);
}

int main()
{
    cout<<fact(5)<<endl;
    cout<<power(5)<<endl;
    cout<<fibo(7);
}
