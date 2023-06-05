// write a c++ program to calculate the power of a number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float base,exp,power;
    cout<<"enter the base:";
    cin>>base;
    cout<<"enter the exponent:";
    cin>>exp;
    power=pow(base,exp);
    cout<<base<<"^"<<exp<<"="<<power<<endl;
    return 0;

}
