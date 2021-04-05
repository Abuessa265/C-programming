#include<stdio.h>
#include<stdio.h>
int main()
{
    char ch=65;
    do
    {
        printf("%c",ch);
        ch++;
    }
    while((ch>= 'A')&&(ch<= 'Z'));
    getch();
}
