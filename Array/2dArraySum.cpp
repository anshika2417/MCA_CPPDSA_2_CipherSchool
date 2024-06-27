#include<bits/stdc++.h>
using namespace std;

//row sum
int sum(int arr[][3], int row, int col)
{
    int max=INT_MIN;  
    for(int i=0;i<row;i++)
    {
        int sum=0; 
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
        //cout<<"Sum of "<<i<<" row "<<sum<<endl;
    }
    return max;   
}

//column sum
int ColumnSum(int arr[][3], int row, int col)
{
    int max=INT_MIN;  
    for(int j=0;j<col;j++)
    {
        int sum=0; 
        for(int i=0;i<row;i++)
        {
            sum=sum+arr[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
        //cout<<"Sum of "<<i<<" row "<<sum<<endl;
    }
    return max;   
}
int main()
{
    int arr[3][3]={1,2,3,7,8,9,4,5,6};
    cout<<"Row wise sum "<<sum(arr,3,3)<<endl;
    cout<<"Column wise sum "<<ColumnSum(arr,3,3)<<endl;
    
}