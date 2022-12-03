#include<iostream>
using namespace std;
template<class T>
T sum(T a[],T n)
{
     T s=0;
     for(int i=0;i<n;i++)
     {
          s=s+a[i];
     }
     return s;
}
int main()
{
     int a[5];
     float ar[5];
     cout<<"Enter array element only integer value"<<endl;
     cout<<"enter 5 element  :  ";
     for(int i=0;i<5;i++)
          cin>>a[i];
     cout<<"sum of array : "<<sum<int>(a,5)<<endl;
     cout<<endl;
     cout<<"Enter array element only float value"<<endl;
     cout<<"enter 5 element  :  ";
     for(int i=0;i<5;i++)
          cin>>ar[i];
     cout<<"sum of array : "<<sum<float>(ar,5)<<endl;
     return 0;
}
