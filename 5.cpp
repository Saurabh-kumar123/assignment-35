#include<iostream>
using namespace std;
template<class T,class F>
 F Addition(T a,F b)
 {
      return(a+b);
 }
int main()
{
     cout<<"addition of multiple data type"<<endl;
     cout<<"----------------------------------"<<endl;
     cout<<"addition of integer     : "<<Addition<int,int>(10,30)<<endl;
     cout<<"addition of float       : "<<Addition<float,float>(10.3,30.2)<<endl;
     cout<<"addition of int & float : "<<Addition<int,float>(10,30.3)<<endl;
     return 0;
}

