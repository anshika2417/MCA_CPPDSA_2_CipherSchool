#include<iostream>
using namespace std;

void insertion(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[7]={5,20,2,6,8,4,3};
    
    insertion(arr,7);
}