#include <iostream>
#include<stack>
using namespace std;

void add(stack<int>&M,stack<int>&A,int val)
{
  if(M.empty())
  {
      M.push(val);
      A.push(val);
  }
  int temp=A.top();
  if(temp>val)
  {
      M.push(val);
      A.push(val);
  }
  else
  {
      M.push(val);
      A.push(temp);

  }

}
  
void print(stack<int>M,stack<int>A)
{
    cout<<" Main Stack"<<endl;
    while(!M.empty())
    {
      cout<<M.top()<<" ";
      M.pop();
    }
  cout<<endl;
      cout<<" Auxilary Stack"<<endl;
      while(!A.empty())
    {
      cout<<A.top()<<" ";
      A.pop();
    }
}
void remove(stack<int>&M,stack<int>&A)
{
    if(M.empty())
    {
        cout<<" Stack is empty"<<endl;
        return ;
    }

    M.pop();
    A.pop();

}  
  void getmin(stack<int>A)
  
  {
  	  if(A.emty())
  	  cout<<"-1";
      cout<<" Min Element "<<A.top()<<endl;
  }  
int main()
{

    stack<int>M;
    stack<int>A;

    add(M,A,10);
    add(M,A,20);
    add(M,A,30);
    add(M,A,5);

    getmin(A);
    
    print(M,A);
    //remove(M,A);
    cout<<endl;
   // print(M,A);
    

}
