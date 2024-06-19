// Array is a collection of same type of data. Array is mutable
//Index- It is a position of an element

#include<iostream>
using namespace std;

int main()
{
    int age[5]={3,2,4,5,6};
    age[2]=13;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<age[i]<<" ";
    // }

    // cout<<"Enter 5 number :";
    // for(int i=0;i<5;i++)
    // {
    //     cin>>age[i];
    // }

    //for-each loop
    for(int i:age){
        cout<<i<<" ";
    }
}
