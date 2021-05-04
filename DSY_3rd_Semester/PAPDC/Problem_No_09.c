#include <stdio.h>
int main()
{
    int n, sum = 0, numbers[20];
    float average;
    printf("Enter total number of elements :");
    scanf("%d", &n);
    printf("\nEnter array elements:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d th element =", i);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++)

        sum += numbers[i];

    average = sum / n;
    printf("\n%f is average", average);
}