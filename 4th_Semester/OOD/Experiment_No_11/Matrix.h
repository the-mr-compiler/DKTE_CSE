class Matrix
{
private:
    int *data;
    int r, c;

public:
    Matrix();
    Matrix(int r, int c);
    Matrix(const Matrix &copy);
    Matrix operator(int *data);
    Matrix operator+(Matrix m);
    Matrix operator-(Matrix m);
    void printMatrix();
    void setMatrix();
};