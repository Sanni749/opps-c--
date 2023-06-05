#include <iostream>
#include <math.h>
using namespace std;
enum shape{circle,rectengle,squre,tringle};
int main()
{
    int choice;
    char ch;
    //float area;
    do
    {
    
        cout << endl<< "press 0 to find the area of circle";
        cout << endl<< "press 1 to find the area of rectangle";
        cout << endl<< "press 2 to find the area of square";
        cout << endl<< "press 3 to find the area of tringle";
        cout << endl<< "enter no.";
        cin>>choice;
        switch (choice)
        {
            float r;
            case circle:cout<<endl<<"enter redius:";
                 cin>>r;
                 cout<<endl<<"area of circle:"<<3.14*r*r;
            break;
            case rectengle:float l,b;
                 cout<<endl<<"enter lenght & breathe:";
                 cin>>l>>b;
                 cout<<endl<<"area of rectengle:"<<l*b;
            break;
            case squre:float d;
                 cout<<endl<<"enter length of side:-";
                 cin>>d;
                 cout<<endl<<"area of square:-"<<(d*d);
            break;
            case tringle:float x,y,z,s;
                 cout<<endl<<"enter x,y,z:-";
                 cin>>x>>y>>z;
                 s=(x+y+z)/2;
                 cout<<endl<<"area of triangle:-"<<(sqrt(s*(s-x)+(s-y)+(s-z)));
            break;
            default:
                 cout<<endl<<"wrong choice:";
        }
        cout<<endl<<"do you want to continue(y/n):-";
        fflush(stdin);
        cin>>ch;

    }while(ch=='y'||ch=='Y');     
    return 0;
}