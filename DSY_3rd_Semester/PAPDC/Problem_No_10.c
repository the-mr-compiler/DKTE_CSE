#include <stdio.h>
#define SIZE 20

int main()
{
    int no, i, sum = 0, temp, j, min, max;
    float median, mode, mean;
    int array[SIZE], count[SIZE];

    printf("\nEnter array size of array:");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
    {
        printf("\n%dth element = ", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < no; i++)
    {
        for (i = i + 1; i < no; i++)
        {
            if (array[j] > array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for (i = 0; i < no; i++)
    {
        sum += array[i];
    }
    mean = sum / no;
    if (no % 2 == 1)
        median = array[no / 2];
    else
    {
        i = (no - 1) / 2;
        median = (array[i] + array[i + 1]) / 2.0;
    }
    for (i = 0; i < no; i++)
    {
        count[i] = 1;
        for (j = i + 1; j < no; j++)
            if (array[i] == array[j])
                count[i]++;
    }
    max = count[0];
    for (i = 0; i < no; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            mode = array[i];
        }
    }
    printf("\nMean=%f,\nMedian=%f,\nMode=%f", mean, median, mode);
}
