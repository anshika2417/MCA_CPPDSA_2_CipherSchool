//Max sub array sum
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int size)
{
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        if(sum>max)
        {
            max=sum;
        }
        else if(sum<0)
        {
            sum=0;
        }
    }
    return max;
}
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    cout<<maxSubArraySum(arr,8);
}