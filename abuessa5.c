
#include<stdio.h>
int main()
{
    int x,y,z,s;
    scanf("%d%d%d",&x,&y,&z);
    s=x+y+z;
    if(s==180)
    printf("%d vailde",s);
    else
        printf("%d unvailde");
    return 0;
}
