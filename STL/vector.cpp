//Vector- It stores data of same type but it can groe or shrink dynamically during the run time

#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    
    //add
    // v1.push_back(10);

    //updatation
    //vector1.at(2)=25;

    //access
    //cout<<vector1[10]<<endl; //while this gives garbage value
   // cout<<vector1.at(10)<<endl; //this gives out of bound array error

   //deletion
//    v1.pop_back();

    for(int item:v1){
        cout<<item<<" ";
    }
}