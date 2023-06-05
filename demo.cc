#include <iostream>
using namespace std;
class demo
{
private:
    int a, b;

public:
    void get(void)
    {
        cout << "\n enter a integer value";
        cin >> a >> b;
    }
    void show(void)
    {
        cout << "\n a=" << a;
        cout << "\n b=" << b;
    }
    // void show(void)
};
// void demo::show(void)
// {
//     cout<<"\na="<<a;
//     cout<<"\nb="<<b;
// }
int main()
{
    demo d1, d2;
    d1.get();
    d2.get();
    d1.show();
    d2.show();
    return 0;
}
