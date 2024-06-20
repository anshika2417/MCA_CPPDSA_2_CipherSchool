//Vector- It stores data of same type but it can groe or shrink dynamically during the run time

#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> vector1 {1,2,3,4};
    
    //add
    vector1.push_back(10);

    //updatation
    //vector1.at(2)=25;

    //access
    //cout<<vector1[10]<<endl; //while this gives garbage value
   // cout<<vector1.at(10)<<endl; //this gives out of bound array error

   //deletion
   vector1.pop_back();
   
    for(int item:vector1){
        cout<<item<<" ";
    }
}