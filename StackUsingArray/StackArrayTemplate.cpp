#include<iostream>
using namespace std;
template<typename T>
class stack
{
    T *arr;
    int capacity;
    int top;

    public:

    stack(int size)
    {
        arr=new T[size];
        capacity=size;
        top=-1;
    }

    void push(T val)
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
        T a =arr[top];
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

    T topelement()
    {
        T a; //creating variable of Type T
        if(isempty())
        {
          cout<<" Stack Underflow\n";
           return a;
        }
        return arr[top];
    }

};


int main()
{
    stack<string> s(5);
    cout<<" Stack is empty "<<s.isempty()<<endl;
    s.push("Hello");
    s.push("Ganesh");
    s.push("LPU");
    s.pop();
     cout<<" Stack is empty "<<s.isempty()<<endl;
    cout<<" Top Element"<<s.topelement()<<endl;


    stack<int> s1(5);
    cout<<" Stack is empty "<<s1.isempty()<<endl;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.pop();
     cout<<" Stack is empty "<<s1.isempty()<<endl;
    cout<<" Top Element "<<s1.topelement()<<endl;
    return 0;
}