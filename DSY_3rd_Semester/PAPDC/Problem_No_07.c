#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, c, n;
    float d, r, s = 0, x;
    printf("\nValue of x(in degree) : ");
    scanf("%f", &x);

    x = x * 3.14 / 180;
    printf("\nValue of n (accuracy) :");
    scanf("%d", &n);

    for (i = 1, c = 0; i <= n; i = i + 2)
    {
        r = powf(x, i);
        for (j = i, d = 1; j >= 1; j--)
            d = d * j;
        r = r / d;
        if ((c % 2) == 0)
            s = s + r;
        else
            s = s + r;
        c++;
    }
    printf("\nValue of sin(x) is %2f", s);
}