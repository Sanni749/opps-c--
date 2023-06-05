// demo default constructer(DC)and porreterized constructer(pc)
#include <iostream>
using namespace std;
class test
{
    int a, b;
    public:
    test(void);
    test(int, int);
    test(int); 
    void get(void);
    void show(void);
};
test::test(void)
{
    a = 7;
    b = 5;
}
test::test(int x, int y)
{
    a = x;
    b = y;
}
void test::show(void)
{
    cout << "\n a=" << a;
    cout << "\n b=" << b;
}
void test::get(void)
{
    cout << "\n enter 2 integer value:";
    cin >> a >> b;
}
test::test(int x)
{
    a = b = x;
}
int main()
{
    test t1(10, 12);
    t1.show();
    test t2;
    t2.show();
    t1.get();
    t1.show();
    t2.get();
    t2.show();
    test t3(0);
    t3.show();
    return 0;
}
