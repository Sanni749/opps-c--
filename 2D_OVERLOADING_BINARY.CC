// add.of 2 3-D arry by overloading binary opateor+()
#include <iostream>
using namespace std;
class matrix
{
    int mat[2][3], r, c;

public:
    void get_matrix(void);
    void show_matrix(void);
    matrix operator+(matrix);
};
void matrix::get_matrix(void)
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\n enter mat[" << i << "]"
                 << "[" << j << "]=";
            cin >> mat[i][j];
        }
    }
}
matrix matrix::operator+(matrix m2)
{
    matrix m3;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3.mat[i][j] = mat[i][j] + m2.mat[i][j];
        }
    }
    return (m3);
}
void matrix::show_matrix(void)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    matrix m1, m2, m3;

    cout << "\n enter first matrix\n";
    m1.get_matrix();
    cout << "\n secound matrix:\n";
    m2.get_matrix();
    m3 = m1 + m2;
    cout << "\n first matrix\n";
    m1.show_matrix();
    cout << "\n secound matrix\n";
    m2.show_matrix();
    cout << "\nresultent matrix\n";
    m3.show_matrix();
    return 0;
}