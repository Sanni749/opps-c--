
#include <iostream>
using namespace std;
class demo
{
    static int count;

public:
    demo(void);
    ~demo(void);
};
int demo::count;
demo::demo(void)
{
    cout << "\n object created";
    cout << "\n count=" << ++count;
}
demo::~demo(void)
{
    cout << "\n object dostroyed:";
    cout << "\n count=" << count--;
}
int main()
{
    demo d1;
    demo d2, d3;
    {
        demo d4, d5;
        {
            demo d6, d7;
        }
        demo d8;
    }
    return 0;
}