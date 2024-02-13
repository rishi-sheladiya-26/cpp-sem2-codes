#include<iostream>
using namespace std;
string f1(int m);
void print_marksheet();
int f2(int tmark);
int main()
{
    print_marksheet();
    return 0;
}
void print_marksheet()
{
    int sum=0,sum1=0;
    string id,name;
    int sem;
    string  sub[3];
    int tmarks[3],prmarks[3],c[3];
    string thgrade[3],prgrade[3];
    string x,y;
    cout<<"enter student id :";
    cin>>id;
    cout<<"enter student name :";
    cin>>name;
    cout<<"enter student's semester :";
    cin>>sem;
    for(int i=0;i<=2;i++)
    {
        cout<<"enter "<<i+1<<" subject :";
        cin>>sub[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<"enter theory marks of :"<<endl;
        cin>>tmarks[i];
    }
    for(int i=0;i<3;i++)

    {
        cout<<"enter practicle marks of :"<<endl;
        cin>>prmarks[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<"enter the credit of subject"<<endl;
        cin>>c[i];
    }
    cout<<"_____________________________________________________________________________________________________"<<endl;
    cout.width(15);
    cout<<left<<"student id"<<":"<<id<<endl;
    cout.width(15);
    cout<<left<<"student name"<<":"<<name<<endl;
    cout.width(15);
    cout<<left<<"student's sem"<<":"<<sem<<endl;
    cout<<"sub \t"<<"theory  "<<"practical"<<endl;
    for(int i=0;i<=2;i++)
    {
        cout<<sub[i]<<"\t"<<f1(tmarks[i])<<"\t"<<f1(prmarks[i])<<"\t"<<endl;

    }
    for(int i=0;i<3;i++)
    {
        sum=sum+c[i];
    }
    for(int i=0;i<3;i++)
    {
        sum1=sum1+(c[i]*(((f2(tmarks[i])))+(f2(prmarks[i])))/2);
    }
        cout<<"SGPA :"<<sum1/sum<<endl;
    cout<<"_____________________________________________________________________________________________________"<<endl;
}
string f1(int tmark)
{
     if((tmark>=80)&&(tmark<=100))
    {
        return "AA";
    }
    else if((tmark>=73)&&(tmark<80))
    {
        return "AB";
    }
    else if((tmark>=66)&&(tmark<73))
    {
        return "BB";
    }
    else if((tmark>=60)&&(tmark<66))
    {
        return "BC";
    }
    else if((tmark>=55)&&(tmark<60))
    {
        return "CC";
    }
    else if((tmark>=50)&&(tmark<55))
    {
        return "CD";
    }
    else if((tmark>=45)&&(tmark<50))
    {
        return "DD";
    }
    else if((tmark<45)&&(tmark>=0))
    {
        return "FF";
    }
    else
    {
        return "invalid";
    }
}
int f2(int tmark)
{
     if((tmark>=80)&&(tmark<=100))
    {
        return 10;
    }
    else if((tmark>=73)&&(tmark<80))
    {
        return 9;
    }
    else if((tmark>=66)&&(tmark<73))
    {
        return 8;
    }
    else if((tmark>=60)&&(tmark<66))
    {
        return 7;
    }
    else if((tmark>=55)&&(tmark<60))
    {
        return 6;
    }
    else if((tmark>=50)&&(tmark<55))
    {
        return 5;
    }
    else if((tmark>=45)&&(tmark<50))
    {
        return 4;
    }
    else if((tmark<45))
    {
        return 0;
    }
}
