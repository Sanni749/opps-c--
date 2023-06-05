#include<iostream>
using namespace std;
class oddeven
{
    int a;
    public:
    void get_data();
    void show_data();
};
void oddeven::get_data()
{
    cout<<"enter cheak number";
    cin>>a;
}
void oddeven::show_data()
{
    if(a%2==0)
    cout<<"even number is=";
    else
    cout<<"odd number is=";
}
int main()
{
    oddeven a;
    a.get_data();
    a.show_data();
    return 0;

}

