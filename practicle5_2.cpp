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
    circle(circle * c)
    {
        r=c->r;
        count++;
    }
    const void display()
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
    circle *c1;
    c1=new circle();
    c1->display();

    circle *c2;
    c2=new circle(20.00f);
    c2->display();

    circle *c3;
    c3= new circle(*c1);

    delete c1;
    delete c2;
    c3->display();
    delete c3;

}
