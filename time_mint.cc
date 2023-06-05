// c++ program to add two time objects using call by reference
#include <iostream>
using namespace std;
class time
{
    int hr, min, sec;

public:
    void get_data();
    void show_data();
    void sum(time, time );
};
void time::get_data()
{
    cout << "enter hours & mintes & sec:-";
    cin >> hr >> min >> sec;
}
void time::show_data()
{
    cout << "\n hours=" << hr;
    cout << "\n mintes=" << min;
    cout<<"\n second="<<sec;

}

void time::sum(time t1,time t2)
{
    sec=t1.sec+t2.sec;
    min=sec / 60;
    sec=sec %60;
    min = t1.min + t2.min;
    min = min / 60;
    min = min % 60;
    hr = hr + t1.hr + t2.hr;
}
int main()
{
    time t1,t2,t3;
    t1.get_data();
    t2.get_data();
    t3.sum(t1,t2);
    t3.show_data();
    return 0;




}
