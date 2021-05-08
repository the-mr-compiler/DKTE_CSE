class Matrix{
    private:
        int data[10][10];
        int r,c;
    public:
        Matrix();
        Matrix(int data[10][10],int r,int c);
        Matrix operator+(Matrix m);
        Matrix operator-(Matrix m);
        void printMatrix();
        void setMatrix();
};