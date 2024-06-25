#include<iostream>
using namespace std;

void sortt(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=size-1;j>0;j--)
        {
            while(i<j)
            {
                if(i==1)
                {
                    swap(arr[i],arr[j]);
                    i++;
                }
                if(j==1)
                {
                    j--;
                }
            }
        }
    }
}
int main()
{
    int arr[5]={0,1,1,0,0};
    sortt(arr,5);
}