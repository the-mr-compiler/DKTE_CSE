#include <iostream>
using namespace std;
#include "Complex.h"
#include "Matrix.h"
using namespace std;
int main()
{
    Matrix m;
    m.setMatrix();
    Matrix m1;
    m1.setMatrix();
    Matrix m2;
    m2=m+m1;
    m2.printMatrix();
    cout<<endl;
    m2=m-m1;
    m2.printMatrix();
    Complex c(2,2);
    Complex c1(2,2);

    Complex c2;
    c2=c+c1;
    cout<<c2.getReal()<<"+"<<c2.getImg()<<"j"<<endl;
    c2=c-c1;
    cout<<c2.getReal()<<"+"<<c2.getImg()<<"j";

    
}