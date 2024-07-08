#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Solution{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> st;
        while(!q.empty())
        {
            int ele = q.front();
            q.pop();
            st.push(ele);
        }
        while(!st.empty())
        {
            int ele=st.top();
            st.pop();
            q.push(ele);
        }
        return q;
    } 
};

int main()
{
    Solution s;
}