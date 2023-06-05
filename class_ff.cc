// additon of 2 number friend function has using ff
#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    void get();
    friend int sum(demo);
};
void demo::get()
{
    cout<<"enter 2 integer value:-";
    cin>>a>>b;
}
int sum(demo d)
{
    return(d.a+d.b);
}
int main()
{
    demo d;
    d.get();
    cout<<"\n addition="<<sum(d);
    return 0;
}