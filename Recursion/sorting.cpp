#include<iostream>
using namespace std;

bool sort(int arr[], int size)
{
    if(size==0 || size==1) return true;

    if(arr[0]>arr[1])
    {
         return false;
    }
    else{
    return sort(arr+1,size-1);
    }
}
int main()
{
    int ar[4]={1,2,3,4};
    cout<<sort(ar, 4);
}
