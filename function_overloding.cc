// prog. to find of circle,rectengle and trinegle using function overloading
#include <iostream>
#include<math.h>
using namespace std;
class shape
{
    
    float a, b, c;
    public:
    float area(float);
    float area(float, float);
    float area(float, float, float);
};
float shape::area(float s)
{
    return (3.14 * s * s);
}
float shape::area(float l, float b)
{
    return (l * b);
}
float shape::area(float a, float b, float c)
{
    float s;
    s = (a + b + c) / 2;
    return(sqrt(s*(s-a)+(s-b)+(s-c)));
}
int main()
{
    shape s;
    cout << endl<< "area of circle having redius 5 is:" << s.area(5);
    cout << endl<< "area of rectengle having redius 7.5 and 3.0 is:" << s.area(7.5, 3.0);
    cout << endl<< "area of tringle having redius 5.7 and 5 is:" << s.area(5.7, 5);
    return 0;
} 