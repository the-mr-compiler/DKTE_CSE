#include <stdio.h>

int main()
{
    int lastNo, first = 0, second = 1, third;
    printf("Enter last no =");
    scanf("%d", &lastNo);
    third = first + second;
    printf("%d,%d", first, second);
    while (third <= lastNo)
    {
        third = first + second;
        printf(",%d", third);
        first = second;
        second = third;
    }
}