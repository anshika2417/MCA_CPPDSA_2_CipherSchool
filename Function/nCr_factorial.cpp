#include<iostream>
using namespace std;

int fact(int m)
{
    int fact=1;
    for(int i=1;i<=m;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = fact(n);
    int dem = fact(r)*fact(n-r);
    return num/dem; 
}

int main()
{
    int n,m;
    cout<<"Enter the value of N and M"<<endl;
    cin>>n>>m;
    
    cout<<nCr(n,m);
}