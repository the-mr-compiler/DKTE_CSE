#include<stdio.h>
int main()
{
    char ip[16];
    int x,y,z,t;
    printf("Please Enter ip address in x.y.z.t format : ");
    scanf("%s",ip);
    sscanf(ip,"%d.%d.%d.%d",&x,&y,&z,&t);
    if(x<=127)
    printf("\nClass : A\nNet Id : %d\nHost Id : %d.%d.%d\nDefault Mask : 255.0.0.0",x,y,z,t);
    else if(x>127 && x<=191)
    printf("\nClass : B\nNet Id : %d.%d\nHost Id : %d.%d\nDefault Mask : 255.255.0.0",x,y,z,t);
    else if(x>191 && x<=223)
    printf("\nClass : A\nNet Id : %d.%d.%d\nHost Id : %d\nDefault Mask : 255.255.255.0",x,y,z,t);
    else
    printf("There is No Net id, Host id and Default mask for D and E");

}