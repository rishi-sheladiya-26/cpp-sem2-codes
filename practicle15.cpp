#include<iostream>
using namespace std;
class product{
protected:
    int id;
    string name,manufacture;
    float price;
public:
    product(int id,string name,string manufacture,float price){
        this->id=id;
        this->name=name;
        this->manufacture=manufacture;
        this->price=price;
    }
    virtual void putdata()=0;
};
class smartwatch:public product{
    float dial;
public:
    smartwatch(int id,string name,string manufacture,float price,float dial):product( id, name, manufacture, price){
        this->dial=dial;
    }
    void putdata(){
        cout<<"Product id:"<<id<<endl;
        cout<<"Product name:"<<name<<endl;
        cout<<"Product manufacture:"<<manufacture<<endl;
        cout<<"Product price:"<<price<<endl;
        cout<<"dial number:"<<dial<<endl;
    }
};
class bedsheet:public product{
    float width,height;
public:
    bedsheet(int id,string name,string manufacture,float price,float width,float height):product( id, name, manufacture, price){
        this->width=width;
        this->height=height;
    }
    void putdata(){
        cout<<"Product id:"<<id<<endl;
        cout<<"Product name:"<<name<<endl;
        cout<<"Product manufacture:"<<manufacture<<endl;
        cout<<"Product price:"<<price<<endl;
        cout<<"width:"<<width<<endl;
        cout<<"Height:"<<height<<endl;
    }
};
int main(){
    smartwatch *ptr;
    ptr=new smartwatch(1,"55","apple",35000,50);
    ptr->putdata();
    bedsheet *ptr1;
    ptr1=new bedsheet(2,"night23","goodsleep",1200,8,8);
    ptr1->putdata();



}
