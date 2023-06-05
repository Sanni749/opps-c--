#include<iostream>
using namespace std;
class employee
{
    int id;
    char name[30];
    public:
    void get_data();
    void show_data();
};
void employee::get_data()
{
    cout<<"Enter id:-";
    cin>>id;
    cout<<"enter name:-";
    cin>>name;
}
void employee::show_data()
{
    cout<<"id no.:-"<<id<<endl;
    cout<<"character name:-"<<name<<endl;
    cout<<endl;
} 
int main()
{
    employee emp,emp1;
    emp.get_data();
    emp.show_data();
    emp1.get_data();
    emp1.show_data();
    return 0;
}