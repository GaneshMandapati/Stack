#include <iostream>
#include<stack>
using namespace std;

void print(stack<stack<int>>parent)
{
    while(!parent.empty())
    {
        stack<int>temp=parent.top();
        {
            while(!temp.empty())
            {
                cout<<temp.top()<<" ";
                temp.pop();
            }
            cout<<endl;
        }
        parent.pop();
    }
}

    
int main() {

   stack<stack<int>>parent;

  stack<int>c1;
  c1.push(10);
  c1.push(20);
  c1.push(30);

  stack<int>c2;
  c2.push(50);
  c2.push(60);
  c2.push(70);
  c2.push(80);

  parent.push(c1);
  parent.push(c2);


  print(parent);




}
