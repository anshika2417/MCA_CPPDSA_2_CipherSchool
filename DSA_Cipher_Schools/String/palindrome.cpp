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

char toLowerCase(char ch)
{
    if(ch>='a' && ch <= 'z')
    {
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool isvalid(char ch)
{
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>=0 && ch<=9)
    {
        return true;
    }
    return false;
}

void replace(string str)
{
    string count;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            count+="@9";
        }
        else{
            count+=str[i];
        }
    }
    cout<<count;
}
int main()
{
    char str[]={'n','a','m','a','n'};
    //cin.getline(str,100);
    cout<<checkPalindrome(str,5);
    cout<<toLowerCase('H')<<endl;
    cout<<isvalid('$')<<endl;
    replace("Anshi ka");

}