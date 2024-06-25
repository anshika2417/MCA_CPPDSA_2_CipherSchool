//Selection sort: select minimum value and sort
#include<iostream>
using namespace std;

void selectionSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={17,27,60,30,5};
    selectionSort(arr,5);
}