#include<iostream>
using namespace std;

bool isKeyPassed(int arr[][4],int target, int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    if(isKeyPassed(arr,7,3,4))
    {
        cout<<"Key is present";
    }
    else{
        cout<<"Key is not present";
    }
}