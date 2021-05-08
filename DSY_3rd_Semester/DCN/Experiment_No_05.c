#include <stdio.h>
#include <string.h>
void encode(char data[], char code[])
{
    int count=0;
    for (int i = 0, j=0; i <= strlen(data); i++,j++)
    {
        code[j]=data[i];
        if(data[i]=='1')
            count++;
        else
            count=0;
        if(count==5)
        {
            j++;
            code[j]='0';
            count=0;
        }
    }
}
void decode(char data[], char out[])
{
    int count=0;
    for (int i = 0, j=0; i <= strlen(data); i++,j++)
    {
        out[j]=data[i];
        if(data[i]=='1')
            count++;
        else
            count=0;
        if(count==5)
            i++;
    }
}
int main()
{
    char data[50],code[50];
    puts("Enter data:");
    scanf("%s",data);    
    encode(data,code);
    puts("\nEncoded Data:");
    puts(code);
    puts("\nDecoded Data:");
    decode(code,data);
    puts(data);
    return 0;
}
