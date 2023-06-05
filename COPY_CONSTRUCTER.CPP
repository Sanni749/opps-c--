// copy constructer: it is used to declere in object using
#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test(int);
    test(int, int);
    // test(test);
    void get(void);
    void show(void);
};
void test::get(void)
{
    cout << "enter the 2 integer value";
    cin >> a >> b;
}
test::test(int p)
{
    a = b = p;
}
void test::show(void)
{
    cout << "\n a=" << a;
    cout << "\n b=" << b;
}
// test::test(void)

// {
// a=t1.a;
// b=t1.b;

// }
int main()
{
    test t1(12, 13);
    t1.get();
    test t2(-5);
    t1.show();
    test t3(t1);
    t3.show();
    t1.get();
    t3.show();
    test t4 = t3;
    return 0;
}
