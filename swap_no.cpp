#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    cout<<"given swap number A="<<a<<" and B= "<<b;
    // cin>>a>>b;
    b=b-a;
    a=a+b;
    cout<<"\nafter swap number a is:-"<<a;
    cout<<"\nafter swap number b is:-"<<b;

    return 0;

}