#include <iostream>
using namespace std;
class demo
{
    int a;
    static int count;

public:
    void get(void);
    void show_all(void);
};
int demo::count;
void demo::get(void)
{
    a = ++count;
}
void demo::show_all(void)
{
    cout << "\n a=" << a;
    cout << "\n count=" << count;
}
int main()
{
    demo d1, d2;
    d1.get();
    d2.get();
    d1.show_all();
    return 0;
}
