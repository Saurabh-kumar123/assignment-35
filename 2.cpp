#include<iostream>
using namespace std;
template<class T,class F>
T largest(T a,F b)
{
     return a>b?a:b;
}
int main()
{
     cout<<"maximum no is  :  "<<largest<float,float>(34.5,36.6)<<endl;
     cout<<"maximum no is  :  "<<largest<float,int>(37.5,36)<<endl;
     cout<<"maximum no is  :  "<<largest<int,int>(36.5,35)<<endl;
     return 0;
}
