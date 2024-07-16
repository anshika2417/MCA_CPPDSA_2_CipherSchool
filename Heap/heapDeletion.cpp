/*
  Deletion 
     1) Copy the last node to the root node
     2) Decrease the size (size--)
     3) Check whether the replaced node is greater thn their child nodes or not,
        if not then swap with the greatest child
        * Use 2*i to go to the left child and 2*i+1 to go to the right child
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

    void deleteFromHeap(){
        if(size==0) return;

        //replace first node with last
        arr[1] = arr[size];

        //remove last element
        size--;

        //take root to its correct position (this process is called heapify)
        int i=1;
        while(i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            int largest = i;

            if(leftIndex < size && arr[i]<arr[leftIndex])
            {
                // swap(arr[i],arr[leftIndex]);
                // i = leftIndex;
                largest = leftIndex;
            }
            if(rightIndex < size && arr[i]<arr[rightIndex])
            {
                // swap(arr[i],arr[rightIndex]);
                // i = rightIndex;

                largest = rightIndex;
            }

            if(largest != i)
            {
                swap(arr[i],arr[largest]);
                i=largest;
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

    h.deleteFromHeap();
    h.print();
}