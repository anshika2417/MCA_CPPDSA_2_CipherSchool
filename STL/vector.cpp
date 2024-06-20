//Vector- It stores data of same type but it can groe or shrink dynamically during the run time

#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> vector1 {1,2,3,4};
    
    for(int item:vector1){
        cout<<item<<" ";
    }
}