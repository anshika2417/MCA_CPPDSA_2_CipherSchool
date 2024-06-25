#include<iostream>
using namespace std;
bool binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end)
    {   
        if(arr[mid]==key)
        {
        return true;
        }
        else if(key>arr[mid])
        {
            mid=start+1;
        }
        else{
            mid=end-1;
        }
        mid=(start+end)/2;
    }
    return false;
}
int main()
{
    int arr[]={1,3,5,7,8,9};
    cout<<binarySearch(arr,6,2);
    return 0;
}