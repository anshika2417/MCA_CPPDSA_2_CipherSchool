#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s)
{
    stack<int> st;

    for(int i=0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '{'|| s[i] == '['){
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            if(!s.empty() && st.top() == '('){
                st.pop();
            }
            else{
                break;
            }
        }
        else if(s[i] == '}')
        {
            if(!s.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                break;
            }
        }
        else if(s[i] == ']')
        {
            if(!s.empty() && st.top() == '['){
                st.pop();
            }
            else{
                break;
            }
        }
        
    }
    if(!st.empty()){
        return false;
    }
    else{
        return true;
    }

}
int main()
{
    string st="([{)}]";
    if(isValid(st))
    {
        cout<<"Balanced";
    }
    else{
        cout<<"Unbalanced";
    }
}
