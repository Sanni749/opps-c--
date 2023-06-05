// pro to find additon of 2 integer 
#include<iostream>
using namespace std;
class bc
{
    public:
    int a,b;
    void get_ab(void);
    void show_ab(void);
};
class dc:public bc
{
    long c;
    public:
    void find_sum(void);
    void show_sum(void);
};
void bc::get_ab(void)
{
    cout<<"enter 2 integer value:-";
    cin>>a>>b;
}
void bc::show_ab(void)
{
    cout<<"\n a="<<a<<"\n b="<<b;
 
 
}
void dc::show_sum(void)
{
    cout<<"\n sum="<<c;

}
void dc::find_sum(void)
{
    c=a+b;
    
}
int main()
{
    dc d1;
    d1.get_ab();
    d1.find_sum();
    d1.show_ab();
    d1.show_sum();
    return 0;
}
