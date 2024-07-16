/* 
  Heap (It is implemented using array)
    Heap is a complete binary tree that comes with a heap order property 
    i.e., either max heap or min heap.

    Indexing:
        Left child: 2*(i)th index |
        Right child: 2*i+1        | When indexing starts from 1
 
        Left child: 2*i+1         |
        Right child: 2*i+2        | When indexing starts from 0
 
        Parent: i/2               | When indexing starts from 1
        Parent: (i-1)/2           | When indexing starts from 0
    
    Insertion:
        Insert element in the left first and check whether the child element is lesser 
        than parent or not. If it is greater than child then swap the child with parent.
  
  CBT : Every level is completely filled except the last level, in which the nodes are added from left. 

*/

#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0] = -1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else return;
        }
    }

    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Heap h;
    h.insert(10);
    h.insert(8);
    h.insert(7);
    h.insert(4);
    h.insert(5);
    h.insert(9);

    h.print();
}