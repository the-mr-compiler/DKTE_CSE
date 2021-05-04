#include <stdio.h>

int main()
{
    int start, end, no, i;
    printf("\nEnter start and end =");
    scanf("%d%d", &start, &end);
    for (no = start; no <= end; no++)
    {
        for (i = 2; i < no; i++)
        {
            if (no % i == 0)
                break;
            else
                continue;
        }
        if (i == no)
            printf("\n%d", no);
    }
}