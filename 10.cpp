#include<iostream>
using namespace std;
template<typename T>
class val
{
     public:
          T ar[10];
   void insertelement(T v)
{
     ar[v%10]=v;
}
int findvalue(int v)

{
   if(v==ar[v%10])
          return 1;
   else
     return 0;
}
};
int main()
{
     val<int>v;
     int n,a;
     cout<<"how many element insert : ";
     cin>>n;
     cout<<"\nEnter "<<n<<" element"<<endl;
     for(int i=1;i<=n;i++)
     {
          cin>>a;
        v.insertelement(a);
     }
     cout<<"\nEnter a surch element : ";
     cin>>n;
     if(v.findvalue(n))
          cout<<"value found"<<endl;
     else
          cout<<"value not found"<<endl;
     return 0;
}
