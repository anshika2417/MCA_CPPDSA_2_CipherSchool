#include<iostream>
using namespace std;

int fisrtOccurence(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans = -1;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            ans=mid;
            end=mid-1;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
int lastOccurence(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans = -1;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            ans=mid;
            start=mid+1;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;    
}
int main()
{
    int arr[7]={2,3,3,4,5,6,6};
    // cout<<fisrtOccurence(arr,7,3)<<endl;
    cout<<lastOccurence(arr,7,6);
}