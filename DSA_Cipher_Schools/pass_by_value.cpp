#include<iostream>
using namespace std;

void updateArr(int arr[],int size)
{
    cout<<"Enter update function "<<endl;
    arr[1]=20;   //this will also change in main method and it is only possible in array but in variable it is not possible.
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Exiting update function "<<endl;
}
int main()
{
    int arr[3]={1,2,3};
    updateArr(arr,3);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }

}