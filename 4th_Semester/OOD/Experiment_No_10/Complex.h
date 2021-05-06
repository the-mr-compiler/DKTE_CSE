class Complex
{
private:
    int img,real;
public:
    Complex();
    Complex(int real,int img);
    Complex operator+(Complex c);
    Complex operator-(Complex c);
    void setImg(int img);
    void setReal(int real);
    int getImg();
    int getReal();

};
