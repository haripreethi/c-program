#include<stdio.h>
void main()
{
int n,a,b,c,i;
printf("enter the element");
scanf("%d",&n);
a=0;
a=1;
printf("%d%d",a,b);
for(i=1;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
}
