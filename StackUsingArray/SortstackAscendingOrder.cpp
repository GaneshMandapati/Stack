#include<iostream>
#include<stack>
using namespace std;

stack<int> sortstack(stack<int>s)
{
    if(s.empty())
    {
        cout<<" Stack is Empty"<<endl;
        return s;
    }
    stack<int> temp;
    int Z=s.top();
    s.pop();
    temp.push(Z);

    while(!s.empty())
    {
        int t=s.top();
        s.pop();
        while(!temp.empty()&& t>temp.top())
        {
            int v=temp.top();
            s.push(v);
            temp.pop();
        }
        temp.push(t);
    }
    
    return temp;

}
void print(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    stack<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        int M;
        cin>>M;
        s.push(M);
    }
  s=sortstack(s);
    print(s);
}