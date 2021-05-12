#include "Matrix.h"
#include <iostream>
#include <conio.h>

using namespace std;

Matrix::Matrix()
{
    c = 1;
    r = 1;
}

Matrix::Matrix(int r, int c)
{
    this->r = r;
    this->c = c;
}

Matrix::Matrix(Matrix &obj)
{
    for (int i = 0; i < obj.r; i++)
    {
        for (int j = 0; j < obj.c; j++)
        {
            data[i][j] = obj.data[i][j];
        }
    }
}

Matrix::~Matrix()
{
    free(data[r]);
}
istream &operator>>(istream &is, Matrix &obj)
{
    int r = obj.getRows();
    int cols = obj.getCols();
    int temp = 0;

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            cout << "Enter for : " << i << "th row and " << j << "th coloumn :";
            is >> temp;
            obj.setData(temp, i, j);
        }
    }
    return is;
}

Matrix Matrix::operator+(Matrix &m)
{
    if (this->r != m.r || this->c != m.c)
        throw "Matrix Dimension Mismatch";
    Matrix a(m.r, m.c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a.setData(this->data[i][j] + m.data[i][j], i, j);
        }
    }

    return a;
}
Matrix Matrix::operator-(Matrix &m)
{
    if (this->r != m.r || this->c != m.c)
        throw "Matrix Dimension Mismatch";
    Matrix a(m.r, m.c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a.setData(this->data[i][j] - m.data[i][j], i, j);
        }
    }

    return a;
}

Matrix Matrix::operator*(Matrix &m)
{
    if (this->r != m.c)
        throw "Matrix Dimension Mismatch";
    Matrix a(this->r, m.c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a.setData(0, i, j);

            for (int k = 0; k < c; k++)
            {
                a.setData(this->data[i][k] + m.data[k][j], i, j);
            }
        }
    }
    return a;
}

ostream &operator<<(ostream &os, Matrix &obj)
{
    int r = obj.getRows();
    int cols = obj.getCols();

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << obj.getData(i, j) << " ";
        }

        cout << endl;
    }
    return os;
}
int Matrix::getCols()
{
    return this->c;
}
int Matrix::getRows()
{
    return this->r;
}
int Matrix::getData(int i, int j)
{
    return this->data[i][j];
}
void Matrix::setData(int d, int i, int j)
{
    this->data[i][j] = d;
}