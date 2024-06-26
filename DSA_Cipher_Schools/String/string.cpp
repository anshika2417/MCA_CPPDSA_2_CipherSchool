#include<iostream>
using namespace std;

// int getLength(char arr[])
// {
//     int count=0;
//     for(int i=0;arr[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char str[100];
//     cin.getline(str,100);
//     cout<<getLength(str);
// }


int main()
{
    string str="Hello World";
    cout<<str.insert(6,"test ");
}