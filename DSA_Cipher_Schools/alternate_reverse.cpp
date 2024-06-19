
//swap alternate elements of array
//pair sum
//triplet sum
//sort 0's and 1's eg: 1010 after sorting: 0011
//find duplicate elements and find how many numbers are duplicate
//find unique elements
//find intersection elements
//No of occurence of an elements in an array is unique or not

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
