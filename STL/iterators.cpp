//Iterator is an object which behaves like an object in vector
//begin() it points to the first index and end() it points the end wala index
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1={2,4,5,7};
    vector<int> :: iterator itr;
    //itr=v1.begin();
    itr=v1.end()-1;

    cout<<*itr<<endl;

    for(itr=v1.begin(); itr!=v1.end();itr++) {
        cout<<*itr<<" ";
    }

}