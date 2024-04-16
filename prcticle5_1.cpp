#include<iostream>
using namespace std;
#define PI 3.14
int count;
class circle
{
    float r;
public:
    circle()
    {
        r=1;
        count++;
    }
    circle (float y)
    {
        r=y;
        count++;
    }
    circle(circle & c)
    {
        r=c.r;
        count++;
    }
    void display()
    {
        cout<<"circle with radius "<<r<<" has area of "<<PI*r*r<<endl;
    }
    ~circle()
    {
        count--;
        cout<<"one object is deleted"<<endl;
        cout<<"number of active object is : "<<count<<endl;
    }
};
int main()
{
    circle c1;
    circle c2(20.00f);
    circle c3(c1);
    c1.display();
    c2.display();
    c3.display();
}
