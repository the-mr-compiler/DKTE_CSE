#include <iostream>
using namespace std;
class Matrix
{
private:
    int data[10][10];
    int c;
    int r;

public:
    Matrix();
    Matrix(Matrix &obj);
    Matrix(int row, int col);
    ~Matrix();
    friend istream &operator>>(istream &is, Matrix &obj);
    friend ostream &operator<<(ostream &os, Matrix &obj);
    Matrix operator+(Matrix &b);
    Matrix operator-(Matrix &b);
    Matrix operator*(Matrix &b);
    int getRows();
    int getCols();
    int getData(int i, int j);
    void setData(int d, int i, int j);
};