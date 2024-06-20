//swap alternate elements of array

#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int start=0;
    int end=start+1;
    for(int i=0;i<size;i++)
    {
    while(end<size)
    {
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={1,2,3,4,5,8};
    reverse(arr,6);
}
