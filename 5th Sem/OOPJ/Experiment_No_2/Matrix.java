import java.util.Scanner;

public class Matrix {
    int row, columns;
    double arr[][];

    public Matrix() {
        row = 0;
        columns = 0;
        arr = new double[row][columns];
    }

    public Matrix(int r, int c) {
        row = r;
        columns = c;
        arr = new double[row][columns];
    }

    public Matrix(double arr[][]) {
        this.arr = arr;
    }

    public void initMatrix(Scanner scanner) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.println("Arr[" + i + "][" + j + "] = ");
                arr[i][j] = scanner.nextInt();
            }
        }
    }

    public void display() {
        System.out.println(this);
    }

    public Matrix addition(Matrix sec) {
        if ((sec.row != row) || sec.columns != columns) {
            return null;
        } else {
            double arr1[][] = new double[row][columns];
            for (int i = 0; i < arr.length; i++) {
                for (int j = 0; j < arr[i].length; j++) {
                    arr1[i][j] = arr[i][j] + sec.arr[i][j];
                }
            }
            return new Matrix(arr1);
        }
    }

    public Matrix subtraction(Matrix sec) {
        if ((sec.row != row) || sec.columns != columns) {
            return null;
        } else {
            double arr1[][] = new double[row][columns];
            for (int i = 0; i < arr.length; i++) {
                for (int j = 0; j < arr[i].length; j++) {
                    arr1[i][j] = arr[i][j] - sec.arr[i][j];
                }
            }
            return new Matrix(arr1);
        }
    }

    public Matrix multiplication(Matrix sec) {
        if (sec.row != columns) {
            return null;
        } else {
            double c[][] = new double[row][sec.columns];
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < sec.columns; j++) {
                    c[i][j] = 0;
                    for (int k = 0; k < columns; k++) {
                        c[i][j] += arr[i][k] * sec.arr[k][j];
                    }
                }
            }
            return new Matrix(c);
        }
    }

    public Matrix division(Matrix sec) {
        if (sec.row != columns) {
            return null;
        } else {
            double c[][] = new double[row][sec.columns];
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < sec.columns; j++) {
                    c[i][j] = 0;
                    for (int k = 0; k < columns; k++) {
                        c[i][j] += arr[i][k] / sec.arr[k][j];
                    }
                }
            }
            return new Matrix(c);
        }
    }

    public Matrix scaleMatrix(double scale) {
        double c[][] = new double[row][columns];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                c[i][j] = arr[i][j] * scale;
            }
        }
        return new Matrix(c);
    }

    public Matrix transpose() {
        double c[][] = new double[columns][row];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                c[j][i] = arr[i][j];
            }
        }
        return new Matrix(c);
    }

    @Override
    public String toString() {
        String a = "";
        for (int i = 0; i < arr.length; i++) {
            a += "\n[";
            for (int j = 0; j < arr[i].length; j++) {
                a += "\t" + arr[i][j];
            }
            a += "\t]";
        }
        return a;
    }
}