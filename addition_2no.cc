#include <iostream>
using namespace std;
class test
{
    int a, b;
    long c;

public:
    void get(void);
    void show(void);
    long sum(void);
};
void test::get(void)
{
    cout << "enter 2 integer value";
    cin >> a >> b;
}
long test::sum(void)
{
    // long c;
    c = a + b;
    return (c);
}
void test::show(void)
{
    long c;
    c = sum();
    cout << "\nsum is=" << c;
    // {
    //     if(c>0)
    //     cout<<" \npositive number is";
    //     else
    //     cout<<"\n negative number is";

    // }
}
int main()
{
    test t1;
    t1.get();
    t1.sum();
    t1.show();
    return 0;
}
