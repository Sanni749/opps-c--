#include<iostream>
using namespace std;
class oneten
{
   int i;
   public:
//    void get_data(void);
   void show_data(void);
};
// void oneten::get_data(void)
// {
//     cout<<"enter one:-";
//     cin>>i;
// }
void oneten::show_data(void)
{
    for(i=1;i<=10;i++)
    // for(i=10;i>=1;i--)
    {
        cout<<"\n"<<i;
    }
}
int main()
{
    oneten n;
    // n.get_data();
    n.show_data();
    return 0;
}