// add.of 2 1-D arry by overloading binary opateor+(MF)or(FF)or(MF)
#include <iostream>
using namespace std;
// bipin
class array
{
    int ary[5];
    public:
    void get_ary(void);
    void show_ary(void);
    // array sum_ary(array);
    // array operator+(array);
    friend array operator+(array, array);
};
void array::get_ary(void)
{
    cout << "\n enter 10 enter value";
    for (int i = 0; i < 5; i++)
    cin >> ary[i];
}
//  array array::sum_ary(array b)
// array array::operator+(array b)
array operator+(array a, array b)
{
    array c;
    for (int i = 0; i < 5; i++)
        // c.ary[i]=ary[i]+b.ary[i];
        c.ary[i] = a.ary[i] + b.ary[i];
    return (c);
}
void array::show_ary(void)
{
    for (int i = 0; i < 5; i++)
        cout << ary[i] << "\t";
}
int main()
{
    array a, b, c;
    a.get_ary();
    b.get_ary();
    // c=a.sum_ary(b);
    c = a + b;
    cout << "\nfirst array\n:";
    a.show_ary();
    cout << "\nsecound array\n:";
    b.show_ary();
    cout << "\nresultent array\n:";
    c.show_ary();
    return 0;
}