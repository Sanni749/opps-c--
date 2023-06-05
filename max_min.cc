#include <iostream>
using namespace std;
class demo
{
    int a, b;

public:
    void get_data(void);
    void show_data(void);
};
void demo::get_data(void)
{
    // cout << "cheak max number:-";
    cout << "cheak min number:-";
    cin >> a >> b;
}
void demo::show_data(void)
{
    // if (a > b)
    if(a<b)
        // cout << "\nmax number a:-" << a;  
        cout << "\nmin number a:-" << a;    
    else
    // cout << "\nmax number a:-" << a;
    cout << "\n min number b:-" << b;
}
int main()
{
    demo m;
    m.get_data();
    m.show_data();
    return 0;
}
