#include<iostream>
using namespace std;

bool checkPalindrome(char str[], int size)
{
    int i=0;
    int j=size-1;

    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;

}
int main()
{
    char str[]={'n','a','m','a','n'};
    //cin.getline(str,100);
    cout<<checkPalindrome(str,5);

}