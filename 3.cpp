#include<iostream>
using namespace std;
template<class T,class F>
T largest(T a,F b,F c)
{
     return a>b&&a>c?a:b>c?b:c;
}
int main()
{
     cout<<"maximum no is  :  "<<largest<float>(34.5f,36.6f,37.5f)<<endl;
     cout<<"maximum no is  :  "<<largest<int>(37,36,26)<<endl;
     cout<<"maximum no is  :  "<<largest<char>('w','x','t')<<endl;
     return 0;
}

