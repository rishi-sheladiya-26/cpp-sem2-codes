#include<iostream>
#include<iomanip>
using namespace std;
struct employee
{
    int id;
    string name;
    string qua;
    float exp;
    int contact;
};
int main()
{
    int i;
    int n;
    cout << "Enter no of Employee :";
    cin >> n;
    employee e[n];

   for(i=0 ; i<n ; i++)
   {

    cout << "Enter Employee id :";
    cin >> e[i].id;
    fflush(stdin);
    cout << "Enter Employee Name :";
    getline(cin,e[i].name);
    fflush(stdin);
    cout << "Enter Qualification :";
    getline(cin,e[i].qua);
    fflush(stdin);
    cout << "Enter Experience :";
    cin >> e[i].exp;
    cout << "Enter Contact :";
    cin >> e[i].contact;
    fflush(stdin);

   }
    char x;
    do {
        int e_id;
        cout << "Enter an employee id : ";
        cin >> e_id;

        for (i = 0; i < n; i++)
        {
            if (e[i].id == e_id)
            {
                cout << "---------------------------------"<<endl;
                cout.width(20);cout <<left<< "Employee Name " << ":"<<e[i].name << endl;
                cout.width(20);cout <<left<< "Qualification " << ":"<<e[i].qua << endl;
                cout.width(20);cout <<left<< "Experience " << ":"<<e[i].exp<< endl;
                cout.width(20);cout <<left<< "Contact Number " <<":"<< e[i].contact << endl;
                cout << "---------------------------------"<<endl;
                break;
            }
        }
            if(i==n)
            {
                cout << "*****************************************"<<endl;
                cout << "ERROR: ENTERED EMPLOYEE ID DOES NOT EXIST."<<endl;
                cout << "*****************************************"<<endl;
            }

        cout << "Press Y to get another employee detail, press N to exit: ";
        cin >> x;
        fflush(stdin);
    } while (x == 'Y' || x == 'y');

    return 0;
}
