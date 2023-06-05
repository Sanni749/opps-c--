#include<iostream>
using namespace std;
class factorial
{
    int fact,num;
    public:
    factorial(){fact=1;}
    void get_data();
    void show_data();  
};
void factorial::get_data()
{
    cout<<"enter  the number to find factorial:"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    fact=fact*i;
}
void factorial::show_data()
{
    cout<<"factoril of "<< num <<" is "<< fact <<endl;
}
int main()
{
    factorial fact;
    fact.get_data();
    fact.show_data();
    return 0;
}
