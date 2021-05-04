#include <stdio.h>

int main()
{
    int no, rev;
    printf("\nEnter number :");
    scanf("%d", &no);
    for (rev = 0; no > 0; no /= 10)
    {
        rev = rev * 10 + (no % 10);
    }
    printf("\nDigits of given numbers=");
    while (rev > 0)
    {
        printf("%5d", rev % 10);
        rev = rev / 10;
    }
}