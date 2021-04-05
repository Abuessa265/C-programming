#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i,sum=0,l;
    printf("single character for end\n");
    for(;1;)
    {
        gets(a);
        l=strlen(a);
        if(l==1)
            break;
        strcpy(b,a);
        strrev(b);
        i=strcmp(a,b);
        if(i==0)
        {
            sum=sum+10;
        }
        else
        {
            sum=sum-5;
        }
    }
    printf("\n%d\n",sum);
    getch();
}
