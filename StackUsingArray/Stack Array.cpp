#include<iostream>
using namespace std;

class stack
{
    int *arr;
    int capacity;
    int top;

    public:

    stack(int size)
    {
        arr=new int[size];
        capacity=size;
        top=-1;
    }

    void push(int val)
    {
        if(isfull())
        {
            cout<<" Stack is empty\n";
            return ;
        }
        cout<<" Pushing "<<val<<" to Stack\n";
        arr[++top]=val;
    }

    bool isfull()
    {
        if(top==capacity-1)
        {
            return true;
        }
        else
        {
             return false;           
        }

    }

    void pop()
    {
        if(isempty())
        {
            cout<<" Stack Underflow\n";
            return ;
        }
        int a =arr[top];
        cout<<"Popping "<<a<<" from stack"<<endl;
         top--;
    }

    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int topelement()
    {
        if(isempty())
        {
          cout<<" Stack Underflow\n";
          return -1;
        }
        return arr[top];
    }

};


int main()
{
    stack s(5);
    cout<<" Stack is empty "<<s.isempty()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
     cout<<" Stack is empty "<<s.isempty()<<endl;
    cout<<" Top Element"<<s.topelement()<<endl;

    return 0;
}