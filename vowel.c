#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("enter any character:");
scanf("%c",&ch);
if(ch='a'||ch='e'||ch='i'||ch='o'||ch='u')
{
printf("vowel");
}
else
{
printf(" not a vowel");
}
getch();
}
