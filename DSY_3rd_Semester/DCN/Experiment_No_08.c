#include <stdio.h>
#include <string.h>
void getBinaryByte(int d,char *o)
{
    int i;
    for(i=0;d>0;i++)    
    {    
        o[i]=d%2?'1':'0';
        d=d/2;    
    }
    o[i]='\0';
}

int main()
{
    char ip[16],bip[4][9];
    int dip[4];
    char b[37];
    // printf("Please Enter ip address in decimal x.y.z.t format : ");
    // scanf("%s",ip);
    // int x,y,z,t;
    // sscanf(ip,"%d.%d.%d.%d",&x,&y,&z,&t);
    // getBinaryByte(x,bip[0]);
    // getBinaryByte(y,bip[1]);
    // getBinaryByte(z,bip[2]);
    // getBinaryByte(t,bip[3]);
    // printf("\nTo binary ip : %s.%s.%s.%s",bip[0],bip[1],bip[2],bip[3]);
    

    printf("\nPlease enter ip address in binary : ");
    scanf("%s",b);
    sscanf(b,"%[^.].s%[^.]s.%[^.]s.%[^.]s",bip[0],bip[1],bip[2],bip[3]);
    puts(bip[1]);
    for (int i = 0; i < 4; i++)
    {
        int c=1;
        dip[i]=0;
        for (int j = strlen(bip[i])-1; j >= 0; j--)
        {
            if(bip[i][j]=='1')
                dip[i]+=c;
            c*=2;
        }
        printf("\n%d",dip[i]);

        
    }
    printf("%d.%d.%d.%d",dip[0],dip[1],dip[2],dip[3]);
    
}