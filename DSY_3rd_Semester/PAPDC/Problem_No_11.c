#include <stdio.h>
#define MAX 10

void getMatrix(int mat[][MAX], int r, int c)
{
    printf("Enter elements of matrix :");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            printf("\nmat1[%d][%d]=", i, j);
            scanf("%d", &mat[i][j]);
        }
}

int isUpperTraingular(int mat[][MAX], int r, int c)
{
    for (int i = 1; i < r; i++)
    {
        for (int j = 0; j < i; j++)
            if (mat[i][j] != 0)
            {
                return 0;
            }
    }
    return 1;
}
void displayMatrix(int mat[][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }
}
int calculateDiagonalSum(int mat1[][MAX], int r, int c)
{
    int i, sum = 0;
    for (i = 0; i < r && i < c; i++)
    {
        sum += mat1[i][i];
    }
    return sum;
}

void calculateTranspose(int mat1[][MAX], int r, int c)
{
    int i, j, mat2[MAX][MAX];
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            mat2[j][i] = mat1[i][j];
        }
    printf("\nTranspose of matrix : \n");
    displayMatrix(mat2, c, r);
}

void addMatrix(int mat1[][MAX], int r1, int c1, int mat2[][MAX], int r2, int c2)
{
    int mat3[MAX][MAX], i, j;
    if (r1 == r2 && c1 == c2)
    {
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        printf("\nAddition of Matrix :\n");
        displayMatrix(mat3, r1, c1);
    }
    else
        printf("\nMatrix Dimensions should be same");
}
void subtractMatrix(int mat1[][MAX], int r1, int c1, int mat2[][MAX], int r2, int c2)
{
    int mat3[MAX][MAX], i, j;
    if (r1 == r2 && c1 == c2)
    {
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
            {
                mat3[i][j] = mat1[i][j] - mat2[i][j];
            }
        printf("\nSubstraction of Matrix :\n");
        displayMatrix(mat3, r1, c1);
    }
    else
        printf("\nMatrix Dimensions should be same");
}
void multiplyMatrix(int mat1[][MAX], int r1, int c1, int mat2[][MAX], int r2, int c2)
{
    int mat3[MAX][MAX], i, j, k;
    if (r1 == c2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                mat3[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("\nMultiplication of Matrix :\n");
        displayMatrix(mat3, r1, c1);
    }
    else
        printf("\nMatrix Dimensions should be same");
}

int main()
{
    int mat1[MAX][MAX], mat2[MAX][MAX], i, j, dc1, dr1, dr2, dc2, sum = 0;

    printf("Enter dimensions of matrix A  r,c: ");
    scanf("%d%d", &dr1, &dc1);
    getMatrix(mat1, dr1, dc1);

    printf("\nYou entered matrix : \n");
    displayMatrix(mat1, dr1, dc1);

    if (isUpperTraingular(mat1, dr1, dc1))
        printf("\nMatrix is Upper Traingular\n");
    else
        printf("\nMatrix is Not Upper Traingular\n");

    printf("\nDiagonal %c= %d", 228, calculateDiagonalSum(mat1, dr1, dc1));

    calculateTranspose(mat1, dr1, dc1);

    printf("Enter dimensions of matrix B r,c: ");
    scanf("%d%d", &dr2, &dc2);
    getMatrix(mat2, dr2, dc2);

    addMatrix(mat1, dr1, dc1, mat2, dr2, dc2);
    subtractMatrix(mat1, dr1, dc1, mat2, dr2, dc2);
    multiplyMatrix(mat1, dr1, dc1, mat2, dr2, dc2);
}
