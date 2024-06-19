#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int size)
{
    int res=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(res<arr[i])
        {
            res=arr[i];
        }
    }
    return res;
}

int getMin(int arr[],int size)
{
    int res=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(res>arr[i])
        {
            res=arr[i];
        }
    }
    return res;
}

int main()
{
    int arr[5]={4,6,65,3,45};
    cout<<getMax(arr,5)<<endl;
    cout<<getMin(arr,5);
}