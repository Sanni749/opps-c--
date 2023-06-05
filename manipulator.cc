#include<iostream>
//#include<ostream>
using namespace std;
int main()
{
    float f=777.56874;
    cout.precision(2);
    cout.fill('*');
    cout<<"f=";
    cout.width(10);
    cout<<f;
    return 0;
}