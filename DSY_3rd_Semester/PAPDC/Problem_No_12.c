#include <stdio.h>
int length(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}
void *replace(char s[], char c, char r)
{
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            s[i] = r;
}
void removeWhiteSpace(char s[], char a[])
{
    for (int i = 0, j = 0; s[i] != '\0'; i++)
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            continue;
        else
        {
            a[j] = s[i];
            j++;
        }
}

int main()
{
    char s[100], a[100], c, r;
    printf("Enter string :\n");
    scanf("%[^\n]s", s);
    getchar();
    printf("\nLength of string : %d", length(s));
    printf("\nEnter character to replace : ");
    c = getchar();
    getchar();
    printf("\nEnter character to replace with : ");
    r = getchar();
    replace(s, c, r);
    printf("\nAfter replace : %s", s);
    removeWhiteSpace(s, a);
    printf("\nAfter removing white spaces : %s", a);
}