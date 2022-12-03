#include<iostream>
using namespace std;
template<class T>
void swap(int &a,int &b)
{
     int t;
     t=a;
     a=b;
     b=t;
}
int main()
{
     int a,b;
     float w,x;
     char y,z;
     cout<<"Enter two enterger no : ";
     cin>>a>>b;
     cout<<a<<" "<<b<<endl;
     swap(a,b);
     cout<<a<<" "<<b<<endl;
     cout<<endl;
     cout<<"Enter two float no  :  ";
     cin>>w>>x;
     cout<<w<<" "<<x<<endl;
     swap(w,x);
     cout<<w<<" "<<x<<endl;
     cout<<"Enter two character  :  ";
     cin>>y>>z;
     cout<<y<<" "<<z<<endl;
     swap(y,z);
     cout<<y<<" "<<z<<endl;
     return 0;
}
