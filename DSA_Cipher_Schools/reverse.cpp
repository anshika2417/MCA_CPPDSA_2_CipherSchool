#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int start=0;
        int end=size;
        while(start<end)
        {
            swap(arr[0],arr[size-1]);
            start++;
            end--;   
        }
       cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
}