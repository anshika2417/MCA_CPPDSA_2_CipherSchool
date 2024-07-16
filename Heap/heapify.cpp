/* 
  Heapify : putting the node in this correct position
  Formula: (n/2)+1 -> n (no need to iterate in a loop coz they are already 
   follows heap order property)
  Check only from n/2 to 1 
  Go though left and right and swap from those which is largest
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


void heapify(int arr[], int n, int i)
{
    int largest =i;
    int left= 2*i;
    int right = 2*i+1;

    if(left<n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
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

    int arr[8] = {-1,1,5,6,8,9,7,3};
    int n=7;

    for(int i=n/2;i>0;i--){
        heapify(arr, n ,i);
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}