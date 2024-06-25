#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[],int size)
{
    int start=0;
    int end=size-1;
    for(int i=0;i<size;i++)
    {
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start=start++;
            end=end--;
        }
        cout<<arr[i]<<" ";
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // int n;
    // cin>>n;
    int arr[4]={1,3,4,2};
    sortArray(arr,4);
    
    return 0;
}
