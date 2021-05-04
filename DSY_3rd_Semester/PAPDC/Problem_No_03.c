#include <stdio.h>

int main()
{
    int wc;
    float bill;
    printf("Enter water consumption = ");
    scanf("%d", &wc);
    if (wc < 1000)
        bill = 155;
    else if (wc > 100 && wc <= 2000)
        bill = 155 + (wc - 1000) * 0.175;
    else if (wc > 2000 && wc <= 3000)
        bill = 155 + 175 + ((wc - 2000) * 0.200);
    else
        bill = 700;
    printf("\nTotal Bill = %f", bill);
}