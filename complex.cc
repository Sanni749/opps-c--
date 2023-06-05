#include <iostream>
using namespace std;
class complex
{
    float real, image;
    // int h,m;
public:
    void get_complex(void);
    void show_complex(void);
    friend complex sum_complex(complex, complex);
};
void complex::get_complex(void)
{
    cout << "enter real and imaginary part:-";
    cin >> real >> image;
}
complex sum_complex(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.image = c1.image + c2.image;
    return (c3);
}
void complex::show_complex(void)
{
    cout << real << "+i" << image;
}
int main()
{
    complex c1, c2, c3;
    c1.get_complex();
    c2.get_complex();
    c3 = sum_complex(c1, c2);
    cout << "\n first complex no:";
    c1.show_complex();
    cout << "\n 2nd complex no:";
    c2.show_complex();
    cout << "\n result complex no:";
    c3.show_complex();
    return 0;
}