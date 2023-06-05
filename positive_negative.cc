#include <iostream>
using namespace std;
class cheak
{
    int a;

public:
    void get_data(void);
    void show_data(void);
};
void cheak::get_data(void)
{
    cout << "cheak inter number=";
    cin >> a;
}
void cheak::show_data(void)
{
    if (a < 0)
        cout << "\nnegative number=";
    else
    {

        if (a > 0)
            cout << "positive number";
        else
            cout << "\nzero number=";
    }
}
int main()
{
    cheak a;
    a.get_data();
    a.show_data();
    return 0;
}
