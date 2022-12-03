#include<iostream>
#include<string>
using namespace std;
class Shape
{
     string shape;
    public:
         Shape(){}
         Shape(string shape):shape(shape){}
         void setshape(string shape)
         {
             this->shape;
         }
         string getshape()
         {
              return shape;
         }
};
template<typename T>
class Circle:public Shape
{
     T x,y,radius;
public:
     Circle(T centerX,T centerY,T r,string s):Shape(s)
     {
          x=centerX;
          y=centerY;
          radius=r;
     }
     Circle(T centerX,T centerY,T r):Shape()
     {
          x=centerX;
          y=centerY;
          radius=r;
     }
     Circle(T r):Shape()
     {
          radius=r;
     }
     Circle(){}
     T area()
     {
          return 3.14*radius*radius;
     }
};
int main()
{
     Circle<float> c(0.0,0.0,10.0,"circle");
     cout<<"\narea of circle  : "<<c.area()<<endl;
     cout<<"color of circle : "<<c.getshape()<<endl;
     return 0;
}
