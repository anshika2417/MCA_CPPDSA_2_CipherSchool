//return
#include<iostream>
using namespace std;

string occurence(string str)
{
    string res;
    for(int i=0;i<str.length()-1;i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                res=res+str[i];
            }
        }
    }
    return res;
}
int main()
{
    string str;
    cout<<"Enter string : ";
    cin>>str;
    cout<<occurence(str);
}