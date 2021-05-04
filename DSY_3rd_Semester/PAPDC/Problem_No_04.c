#include <stdio.h>

int main()
{
    int persons, cookies, requiredCookies;
    printf("\nEnter no of cookies :");
    scanf("%d", &cookies);
    printf("\nEnter no of persons :");
    scanf("%d", &persons);
    if (persons == 0 || persons == cookies)
        printf("\nNo cookies required");
    else
    {
        requiredCookies = persons - (cookies % persons);
        printf("\nRequired cookies =%d", requiredCookies);
    }
}