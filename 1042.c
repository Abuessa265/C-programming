#include<stdio.h>
int main()
{
    int x,y,z,temp,i,j,k;
    scanf("%d %d %d",&x,&y,&z);
    i=x;
    j=y;
    k=z;
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    if(x>z)
    {
        temp=x;
        x=z;
        z=temp;
    }
    if(y>z)
    {
        temp=y;
        y=z;
        z=temp;
    }
    printf("%d\n%d\n%d\n\n",x,y,z);
    printf("%d\n%d\n%d\n",i,j,k);
    return 0;
}
