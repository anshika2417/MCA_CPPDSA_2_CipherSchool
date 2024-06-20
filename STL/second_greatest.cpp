#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void secondGreatest(int arr[],int size)
{
    int max=INT_MIN;
    int max2=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max2 && arr[i]!=max)
        {
            max2=arr[i];
        }
    }
    cout<<max2;
}
int main()
{
    int arr[5]={2,3,4,4,4};
    secondGreatest(arr,5);
}