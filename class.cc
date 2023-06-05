#include <iostream>
using namespace std;
class complex
{
    int a, b;
    long c;

public:
    void get_complex(void);
    void show_output(void);
    long sum_complex(complex, complex);
};
void complex::get_complex(void)
{
    cout << "enter real part of complex:-";
    cin >> a;
    cout << "enter imaginary part of complex:-";
    cin >> b;
}
long complex::sum_complex(complex c1, complex c2)
{
    a = c1.a + c2.a;
    b = c1.b + c2.b;
}
void complex::show_output(void)
{
    cout << a << "+i" << b << "\n";
}

int main()
{
    complex c1, c2, c3;
    c1.get_complex();
    c2.get_complex();
    c3.sum_complex(c1, c2);
    cout << "\nfirst complex no.:-";
    c1.show_output();
    cout << "second complex no.=";
    c2.show_output();
    c3.show_output();
    return 0;
}
