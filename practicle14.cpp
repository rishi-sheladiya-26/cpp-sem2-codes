#include<iostream>
#include<iomanip>
using namespace std;
int o=0,g=0;

class lit
{
    string name;
    int id;
public:
    void get()
    {
        cout<<"enter id and name : ";
        cin>>id>>name;
    }
    void put()
    {
        cout<<"id and name are   :"<<id<<endl<<name;
    }
};

class e : public virtual lit
{
    string doi;
public:
    void gete()
    {
        cout<<"enter doi :";
        cin>>doi;
    }
    void pute()
    {
        cout<<"doi is     :"<<doi;
    }

};

class hb : public virtual lit
{
    int no;
public:
    void gethb()
    {
        cout<<"enter page no :";
        cin>>no;
    }
    void puthb()
    {
        cout<<"page no :"<<no;
    }
};

class book : public e , public hb
{
    int isbn;
    char tb;
public:
    void getbook()
    {
        get();
        o++;
        cout<<"enter isbn num of book :";
        cin>>isbn;
        char c;
        cout<<"enter h for hard bound and for e bond enter e  :";
        cin>>c;
        if(c=='h')
        {
            tb = 'h';
            gethb();
        }
        else
        {
            tb = 'e';
            gete();
        }
    }
    void putbook()
    {
        put();
        cout<<"isbn no of book is :"<<isbn;
        if (tb=='h')
            puthb();
        else
            pute();
    }

};

class mag : public e , public hb
{
    int issn;
    char tm;
public :
    void getmag()
    {
        get();
        g++;
        cout<<"enter issn no of mag :";
        cin>>issn;
        char c;
         cout<<"enter h for hard bound and for e bond enter e";
        cin>>c;
        if(c=='h')
        {
            tm='h';
            gethb();
        }
        if(c=='e')
        {
            tm='e';
            gete();
        }
    }
    void putmag()
    {
        put();
        cout<<"issn no of mag :"<<issn;
        if (tm=='h')
            puthb();
        else
            pute();
    }
};

int main()
{
    int a;
    char c,yorn;
    book b[10];
    mag m[10];
    do{
    cout<<"1) enter book data   2)enter mag data   3)output of all book   4)output of all mag  :";
    cin>>a;
    switch(a)
    {
    case 1:

        b[o].getbook();

    break;

    case 2:

        m[g].getmag();

    break;

    case 3:
        for(int i=0;i<o;i++)
        {
            b[i].putbook();
        }
    break;

    case 4:
        for(int i=0;i<g;i++)
        {

            m[i].putmag();
        }
    break;

    default:
    break;

    }
    cout<<"enter y or Y for :";
    cin>>yorn;


    }
    while(yorn=='y'||yorn=='Y');
    return 0;
}
