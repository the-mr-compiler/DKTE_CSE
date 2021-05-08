#include "Matrix.h"
#include "iostream"
using namespace std;

Matrix::Matrix()
{
    r=0;
    c=0;
}
Matrix::Matrix(int data[10][10],int r,int c)
{
    this->r=r;
    this->c=c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            this->data[i][j]=data[i][j];
        }
        
    }
}
Matrix Matrix::operator+(Matrix m)
{
    int a[10][10];
    if(this->r==m.r && this->c==m.c){
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j]=this->data[i][j]+m.data[i][j];
        }
        
    }
    }
    Matrix ans(a,this->r,this->c);
    return ans;
}
Matrix Matrix::operator-(Matrix m)
{
    int a[10][10];
    if(this->r==m.r && this->c==m.c){
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j]=this->data[i][j]-m.data[i][j];
        }
        
    }
    }
    Matrix ans(a,r,c);
    return ans;
}

void Matrix::printMatrix()
{
    for (int i = 0; i < r; i++)
    {
        cout<<"|\t";
        for (int j = 0; j < c; j++)
        {
            cout<<+this->data[i][j]<<"\t";
        }
        cout<<"|"<<endl; 
    }   
}
void Matrix::setMatrix()
{
    cout<<"\nEnter row and column :";
    cin>>this->r>>this->c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<endl<<"a["<<i<<"]["<<j<<"]=";
            cin>>this->data[i][j];
        }
    }   
}