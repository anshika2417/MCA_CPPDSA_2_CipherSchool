//Bubble Sort: push the max to the last by adjacent swaps
#include<iostream>
using namespace std;

// void bubbleSort(int arr[],int size)
// {
//     for(int i=size-1;i>0;i--)
//     {
//         for(int j=0;j<i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j+1],arr[j]);
//             }
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

//optimize solution

void bubbleSort(int arr[],int size)
{
    for(int i=size-1;i>0;i--)
    {
        int hasSwapped=0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
                hasSwapped=1;
            }
        }
        if(hasSwapped==0)
        break;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={30,7,20,1,5};
    bubbleSort(arr,5);
}