#include <iostream>
#include<stack>
using namespace std;

void print(stack<int>s)
{
    if(s.empty())
    {
        cout<<" Satck is empty"<<endl;
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main() {

   stack<int> s;
   s.push(10);
   s.push(20);
   s.push(60);
   s.push(40);
   s.push(50);

   print(s);

}
