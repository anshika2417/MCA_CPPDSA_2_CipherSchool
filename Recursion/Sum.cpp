#include<iostream>
using namespace std;

int Printsum(int arr[], int size)
{
    if(size==0) return 0;
    if(size==1) return arr[0];

    int remainingPart = Printsum(arr+1,size-1);
    int sum = arr[0] + remainingPart;
    return sum;

    
}
int main()
{
    int ar[4]={1,2,3,4};
    cout<<Printsum(ar, 4);
}