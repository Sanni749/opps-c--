
#include<iostream>
using namespace std;
int main()
{
    float l,b,area,peri;
    cout<<"enter value of lentgh & breath";
    cin>>l>>b;
    area=l*b;
    peri=2*(l+b);
    cout<<"\narea="<<area;
    cout<<"\nperimeter="<<peri;
    return 0;
}