// overloading unary op using (MF)or(FF)and(+MF)
#include <iostream>
using namespace std;
class nagation
{
    int a, b, c, d;

public:
    void get_data(void);
    void show_data(void);
    // void negate_data(void);
    // void operator-(void);
    friend void operator-(nagation);
};
void nagation::get_data(void)
{
    a = 10;
    b = -20;
    c = 30;
    d = -40;
}
void nagation::show_data(void)
{
    cout << "\na=" << a << "\nb=" << b;
    cout << "\nc=" << c << "\nd=" << d;
}
// void nagation::negate_data(void)
// void nagation::operator-(void)
void operator-(nagation n)

{
//     a=-a;
//     b=-b;
//     c=-c;
//     d=-d;
    n.a = -n.a;
    n.b = -n.b;
    n.c = -n.c;
    n.d = -n.d;
}
int main()

{ 
    nagation n;
    n.get_data();
    cout << "\n orisinal values:";
    n.show_data();
    // n.negate_data();
    -n;
    cout << "\n value after nagation:";
    n.show_data();
    return 0;
}