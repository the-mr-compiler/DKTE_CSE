#include <stdio.h>
void send(char data[8],char code[9])
{
    short parity=0;
    for (int i = 0; i < 8; i++)
    {
        if(data[i]=='1')
            parity=!parity;
        code[i]=data[i];
    }
    code[8]=!parity?'0':'1';
}
short receive(char code[9])
{
    short parity=0;
    for (int i = 0; i < 9; i++)
        if(code[i]=='1')
            parity=!parity;
    
    return !parity;
}
int main()
{
    char *data="11100011";
    char code[9];
    send(data,code);
    puts("Even Parity Check:");
    puts("\nData:");
    for (int i = 0; i < 9; i++)
        putchar(data[i]);
    puts("\nCode:");
    for (int i = 0; i < 9; i++)
        putchar(code[i]);
    receive(code)?puts("\nNo Error"):puts("Error");
}
