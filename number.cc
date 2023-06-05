#include<iostream>
using namespace std;
class one
{
    int n;
    public:
    void get_data(void);
    void show_data(void);

};
void one::get_data(void)
{
    cout<<"enter a number:-";
    cin>>n;
}
void one::show_data(void)
{
    for(int i=1;i<=n;i++)
    {
        cout<<"\n"<<i;
    }
}
int mian()
{
    one m;
    m.get_data();
    m.show_data();
    return 0;
}