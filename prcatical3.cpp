#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
class tata
{
    int mileage,seat,num;
    float tank,price;
    string name,tra,fuel,air;
    public :
    void getdata()
    {
        int x;
        cout<<"enter number of car    :";
        cin>>num;
        cout<<"enter name of car    :";
        cin>>name;
        fflush(stdin);
        cout<<"enter fuel type of car 1. diesel   2. petrol   3. cng   4. electric    :";
        cin>>x;
        fflush(stdin);
        if (x==1)
            fuel="diesel";
        else if(x==2)
            fuel="petrol";
        else if(x==3)
            fuel="cng";
        else if(x==4)
            fuel="electric";
        cout<<"enter price(lakhs) of car    :";
        cin>>price;
        fflush(stdin);
        cout<<"enter milage of car    :";
        cin>>mileage;
        fflush(stdin);
        cout<<"enter transmission of car:-  1. manual  2.amt    :";
        cin>>x;
        if (x==1)
            tra="manual";
        else if(x==2)
            tra="amt";
        cout<<"enter tank capacity of car    :";
        cin>>tank;
        fflush(stdin);
        cout<<"enter seat capacity of car    :";
        cin>>seat;
        fflush(stdin);
        cout<<"enter 1. airbag  2. not airbag    :";
        cin>>x;
        if(x==1)
            air="yes";
        else if(x==2)
            air="no";
    }
    void head()
    {
        system("CLS");
        cout<<"car details :-  "<<endl<<endl;
        cout.width(8);cout<<left<<"number";
        cout.width(8);cout<<left<<"Model";
        cout.width(10);cout<<left<<"Fuel";
        cout.width(10);cout<<left<<"Price(lks)";
        cout.width(8);cout<<left<<"Mileage";
        cout.width(15);cout<<left<<"Transmission";
        cout.width(14);cout<<left<<"Tank capacity";
        cout.width(16);cout<<left<<"Seat capacity";
        cout.width(8);cout<<left<<"Airbag"<<endl;
    }
    void putdata()
    {
        cout.width(8);cout<<left<<num;
        cout.width(8);cout<<left<<name;
        cout.width(10);cout<<left<<fuel;
        cout.width(10);cout<<left<<price;
        cout.width(8);cout<<left<<mileage;
        cout.width(15);cout<<left<<tra;
        cout.width(14);cout<<left<<tank;
        cout.width(16);cout<<left<<seat;
        cout.width(8);cout<<left<<air<<endl;
    }
    void cname()
    {
        cout<<name<<endl;
    }
    string cfuel()
    {
        return (fuel);
    }
    float cprice()
    {
        return price;
    }
};
int main()
{
    float y;
    int n,x;
    cout<<"Enter number of car you want to enter    :";
    cin>>n;
    tata cars[n];
    for(int i=0;i<n;i++)
    {
       cars[i].getdata();
    }
    char s;
    do
    {
        cout<<"Get the car details as per your preference:- "<<endl;
        cout<<"(1)model name (2)fuel type (3) price range    :-";
        cin>>x;
        switch(x)
        {
        case 1:
            cout<<"List of cars :-"<<endl;
             for(int i=0;i<n;i++)
            {
                cout<<"("<<i+1<<") ";
                cars[i].cname();
            }
            cout<<endl<<"choose no of car to get details    :";
            cin>>x;
            cars[0].head();
            cars[x-1].putdata();
            break;
        case 2:
            cout<<"tata motars are available with fuel option    :-"<<endl;
            cout<<"1. diesel  2. petrol  3. cng  4. electric    :";
            cin>>x;
            cars[0].head();
        for(int i=0;i<n;i++)
            {
                string f;
                f=cars[i].cfuel();
                if (x==1)
                    if (f=="diesel")
                        cars[i].putdata();
                if (x==2)
                    if (f=="petrol")
                        cars[i].putdata();
                if (x==3)
                    if (f=="cng")
                        cars[i].putdata();
                if (x==4)
                    if (f=="electric")
                        cars[i].putdata();
            }
            break;
        case 3:
            cout<<"enter your price range    :";
            cin>>x;
            cars[0].head();
            for(int i=0;i<n;i++)
            {
                float p;
                p=cars[i].cprice();
                if (p<=x)
                    cars[i].putdata();
            }
            break;
        default:
            cout<<"Enter valid option.";
        }
        cout<<"Enter Y or y if you want more otherwise enter N OR n    :-";
        cin>>s;
    }while(s=='y'||s=='Y');
    return 0;
}
