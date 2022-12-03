#include<iostream>
#include<string>
using namespace std;
int st[10],top;
template<class T>
class Stack
{
public:
     Stack()
     {
          top=-1;
     }
     void push(T v)
     {
          st[++top]=v;
     }
     T pop()
     {
          return st[top--];
     }
};
int main()
{
     Stack<int> s;
     Stack<string> str;
     s.push(23);
    // str.push("Hellow");
    // str.push("saurabh");
     cout<<s.pop()<<endl;
    // cout<<str.pop()<<endl;
    // cout<<str.pop()<<endl;
     return 0;
}
