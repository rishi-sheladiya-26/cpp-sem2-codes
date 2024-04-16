#include<iostream>
using namespace std;
class complex
{
    float a,b;
public:
    void getdata()
    {
        cout<<"Enter real part :";
        cin>>a;
        cout<<"Enter imaginary part :";
        cin>>b;
    }
    void putdata()
    {
        if(b<0)
        {
            cout<<a<<b<<"i"<<endl;
        }
        else
        {
            cout<<a<<'+'<<b<<"i"<<endl;
        }
    }
    complex operator+ (complex &c)
    {
        complex cc;
        cc.a=a+c.a;
        cc.b=b+c.b;
        return cc;
    }
    complex operator- (complex &c)
    {
        complex cc;
        cc.a=a-c.a;
        cc.b=b-c.b;
        return cc;
    }
    complex operator! ()
    {
        complex cc;
        cc.a=-a;
        cc.b=-b;
        return cc;
    }
    friend complex operator* (complex &c,complex &d);
    friend complex operator/ (complex &c,complex &d);
};
complex operator* (complex &d,complex &c)
{
    complex cc;
    cc.a=(d.a* c.a)-(d.b* c.b);
    cc.b=(d.a* c.b)+(d.b* c.a);
    return cc;
}
complex operator/ (complex &d,complex &c)
{
    complex cc;
    cc.a=((d.a* c.a)+(d.b* c.b))/((c.a*c.a) +(c.b*c.b));
    cc.b=((d.b* c.a)-(d.a* c.b))/((c.a*c.a) +(c.b*c.b));
    return cc;
    }
int main()
{
    complex c1,c2,c3,c4;
    char o;
    c1.getdata();
    c2.getdata();
    cout<<"(+) addition"<<endl<<"(-) subtraction"<<endl;
    cout<<"(*) multiplication"<<endl<<"(/) division"<<endl<<"(!) negation"<<endl;
    cout<<"Enter your choice :";
    cin>>o;
    switch(o)
    {
    case'+':
        c3=c1+c2;
        break;
    case'-':
        c3=c1-c2;
        break;
    case'!':
        c4=!c1;
        c3=!c2;
        c4.putdata();
        break;
    case'*':
        c3=c1*c2;
        break;
    case '/':
        c3=c1/c2;
    }
    c3.putdata();
    cout<<"\n\n\n";
    return 0;
}
