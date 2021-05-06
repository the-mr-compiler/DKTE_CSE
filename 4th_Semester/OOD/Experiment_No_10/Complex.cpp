#include "Complex.h"

Complex::Complex()
{
    this->img=0;
    this->real=0;
}
Complex::Complex(int real,int img)
{
    this->real=real;
    this->img=img;
}
Complex Complex::operator+(Complex c)
{
    Complex com(this->real+c.real,this->img+c.img);
    return com;
}
Complex Complex::operator-(Complex c)
{
    Complex com(this->real-c.real,this->img-c.img);
    return com;
}
int Complex::getImg()
{
    return this->img;
}
int Complex::getReal()
{
    return this->real;
}

void Complex::setImg(int img)
{
    this->img=img;
}
void Complex::setReal(int real)
{
    this->real=real;
}
