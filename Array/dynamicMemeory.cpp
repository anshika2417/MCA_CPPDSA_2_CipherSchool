//Dynamically allocate memory in heap:  int *ptr=new int[n];
// when we want to delete of an array so : delete[]ptr

//1D Array -> int* ptr= new int[n]
//2D Array -> int** arr = new int*[n]

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Size of an array : ";
    cin>>row>>col;
    int** arr = new int*[row];

    for(int i=0;i<row;i++)
    {
        arr[i] = new int[i];
    }

    //taking input
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    //printing output
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deallocate
    for(int i=0;i<row;i++)
    {
        cout<<"Deallocation of memory"<<endl;
        delete []arr[i];
    }
    delete []arr;
}