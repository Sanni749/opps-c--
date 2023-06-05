#include<iostream>
using   namespace std;
class complex
{
    int real,imag;
    public:
    void get_data();
    friend complex max (complex,complex);
    void show_data();
};
void complex::get_data()
{
    cout<<"enter real & imaginary part:-";
    cin>>real>>imag;
}

complex max(complex d1,complex d2)
{
    complex c3;
    c3.real=d1.real+d2.real;
    c3.imag=d1.imag+d2.imag;
    return (c3);

}
void complex::show_data()
{
    cout<<real<<"+i"<<imag;
}
int main()
{
    complex d1,d2,d3;
    d1.get_data();
    d2.get_data();
    d3=max(d1,d2);
    cout<<endl<<"first complex number:-";
    d1.show_data();
    cout<<endl<<"second complex number:-";
    d2.show_data();
    cout<<endl<<"resultant complex number:-";
    d3.show_data();
    return 0;
}  