#include<iostream>
using namespace std;
class marks
{
    protected:
    int m1,m2,m3,m4;
    void get_m(void);
    public:
    void show_m(void);

};
class result:public marks
{
    int total;
    void find_res(void);
    public:
    void show_res(void);

};
void marks::get_m(void)
{
    cout<<"\n enter  a marks in 4 subject:-";
    cin>>m1>>m2>>m3>>m4;
}
void result::find_res(void)
{
    total=m1+m2+m3+m4;
}
void marks::show_m(void)
{
    get_m();
    cout<<"\n marks in subject 1:-"<<m1;
    cout<<"\n marks in subject 2:-"<<m2;
    cout<<"\n marks in subject 3:-"<<m3;
    cout<<"\n marks in subject 4:-"<<m4;
}
void result::show_res(void)
{
    find_res();
    cout<<"\ntotal:-"<<total;
}
int main()
{
    result r;
     //  r.get_m();
    //  r.find_res();
    r.show_m();
    r.show_res();
    return 0;
}

 