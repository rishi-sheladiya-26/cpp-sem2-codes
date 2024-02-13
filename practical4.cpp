#include<iostream>
using namespace std;
void area(float );
void area(float ,float);
void area(float ,float ,float);
int main()
{
    float x,y,z;
    cout<<"enter the radius of circle   :";
    cin>>x;
    cout<<"area of the circle is   :";
    area(x);
    cout<<endl<<"enter the height of a rectangle   :";
    cin>>x;
    cout<<"enter the width of a rectangle   :";
    cin>>y;
    cout<<"area of a rectangle  is   :";
    area(x,y);
    cout<<endl<<"enter the height of a cuboid   :";
    cin>>x;
    cout<<"enter the width of a cuboid   :";
    cin>>y;
    cout<<"enter the depth of a cuboid   :";
    cin>>z;
    cout<<"the area of a cuboid is   :";
    area(x,y,z);
}
void area(float x)
{
     cout<<3.14*x*x;
}
void area(float x,float y)
{
    cout<<x*y;
}
void area(float x,float y,float z)
{
    cout<<x*y*z;
}
