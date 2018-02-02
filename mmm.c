#include<stdio.h>
void main()
{
int low,high,flag,i;
printf("Enter the two numbers(interval):",low,high);
scanf("%d%d",&low,&high);
for(i=low;i<=high;i++)
{
flag=i%2;
if(flag!=0)
{
printf("%d",i);
}
}
getch();
}
