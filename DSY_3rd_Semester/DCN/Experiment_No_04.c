#include<stdio.h>
void send(char s[],char d[])
{
    int i,j=0;
	d[j++]='$';
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='$'||s[i]=='@')
		{
			d[j++]='@';
			d[j++]=s[i];
		}
		else
			d[j++]=s[i];
	}
	d[j++]='$';
	d[j]='\0';

}
void receive(char s[],char d[])
{
    int i,j=0;
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i]=='@')
		{
			d[j++]=s[++i];
		}
		else
			d[j++]=s[i];
	}
	d[--j]='\0';
}
int main()
{
	int a;
	char s[15],d[32];
    int ch=0;
    while(ch!=3){
        printf("\nMenu :\n\t1. Encode data\t2.Decode code\t3. Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter characters:");
            scanf("%s",s);
            send(s,d);
            printf("Encoded string : %s",d);        
            break;
        case 2:
            printf("\nEnter code:");
            scanf("%s",d);
            receive(d,s);
            printf("Decoded string : %s",s);        
            break;

        default:
            break;
        }
    }
    

	return 0;
}

