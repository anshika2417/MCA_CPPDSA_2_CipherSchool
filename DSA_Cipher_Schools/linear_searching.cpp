#include<iostream>
using namespace std;

bool find(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}


int main()
{
    int arr[7]={5,2,6,7,3,1,9};
    cout<<find(arr,7,9);
    bool ans=find(arr,7,9);
    if(ans)
    {
        cout<<"Key found";
    }
    else{
        cout<<"Not found";
    }

}