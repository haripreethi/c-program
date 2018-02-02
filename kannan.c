#include<stdio.h>
void main()
{
int i,n,multiple=1;
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
multiple=n*i;
printf("%d\t",multiple);
}
getch();
}
