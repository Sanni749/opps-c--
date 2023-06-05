// program to find marks using multilevel inheritance
#include<iostream>
using namespace std;
class info
{
    int roll_no;
    public:
    void get_rn(void);
    void show_rn(void);
};
class marks:public info
{
    protected:
    int m1,m2,m3;
    public:
    void get_m(void);
    void show_m(void); 
    
};
class result:public marks
{
    int total;
    public:
    void find_res(void);
    void show_res(void);

};
void info::get_rn(void)
{
    cout<<"\n enter roll no.=";
    cin>>roll_no;
}
void marks::get_m(void)
{
    cout<<"\n enter marks in 3 subject=";
    cin>>m1>>m2>>m3;
}
void result::find_res(void)
{
    total=m1+m2+m3;

}
void info::show_rn(void)
{
    cout<<"\n roll_no="<<roll_no;
}
void marks::show_m(void)
{
    cout<<"\n marks in subject 1="<<m1;
    cout<<"\n marks in subject 2="<<m2;
    cout<<"\n marks in subject 3="<<m3;
}
void result::show_res(void)
{
    cout<<"\n total marks="<<total;

}
int main()
{
    result r;
    r.get_m();
    r.get_rn();
    r.find_res();
    r.show_rn();
    r.show_m();
    r.show_res();
    return 0;
}
