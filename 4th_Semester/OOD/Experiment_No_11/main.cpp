#include "Matrix.h"

int main()
{
    cout << "Matrix 1 :" << endl;
    Matrix n(2, 2);
    cin >> n;
    cout << n;
    cout << "Matrix 2 :" << endl;

    Matrix m(2, 3);
    cin >> m;
    cout << m;

    Matrix a;
    try
    {
        a = m + n;
        cout << "Addition\n"
             << a;
        a = m - n;
        cout << "Substraction\n"
             << a;
        a = m * n;
        cout << "Multiplication\n"
             << a;
    }
    catch (const char *e)
    {
        cout << e << '\n';
    }
}