public class Operation {
    public int add(int a, int b) throws MyException {
        int c = a + b;

        if (c > 1000)
            throw new MyException("TooLongAddition");
        return c;

    }

    public int sub(int a, int b) throws MyException {
        int c = a - b;

        if (c < 0)
            throw new MyException("NegativeAnswer");
        return c;


    }

    public int mul(int a, int b) throws MyException {
        int c = a * b;

        if (c > 5000)
            throw new MyException("TooLongMultiplication");
     return c;
    }

    public float div(int a, int b) throws MyException {
        if (b == 0)
            throw new MyException("CantDivideByZero");
        
        return (float)a/b;
    }
}