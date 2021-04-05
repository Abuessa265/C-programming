#include<stdio.h>
int main()
{
    int x,i,y,j;
    scanf("%d %d %d %d",&x,&i,&y,&j);
    if(x==y && i==j)printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(y>x && i>j)printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24-x)+y),((60-i)+j));
    else if(y>x && j>i)printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(y-x),(j-i));
    return 0;
}

