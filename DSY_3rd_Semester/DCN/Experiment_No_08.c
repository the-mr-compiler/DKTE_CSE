#include <stdio.h>
int main()
{
    char ip[16],bip[4][9];
    printf("Please Enter ip address in decimal x.y.z.t format : ");
    scanf("%s",ip);
}

void toBinary(char *dip, char *bip[])
{
    int x,y,z,t;
    sscanf(dip,"%d.%d.%d.%d",&x,&y,&z,&t);


}