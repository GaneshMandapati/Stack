#include <iostream>
#include<stack>
using namespace std;

string reverse(string s)
{
    stack<char>a;
    for(int i=0;i<s.size();i++)
    {
        a.push(s[i]);
    }

    for(int i=0;i<s.size();i++)
    {
        s[i]=a.top();
        a.pop();
    }
    
    return s;
}

void print(string s)
{
    cout<<s<<endl;
}
     

int main() {

   string s="Hello World";
   string rev=reverse(s);
   print(rev);

}
