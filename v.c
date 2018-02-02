#include<stdio.h>
void main()
{
int d[4],i,s,v=0;
for(i=0;i<=4;i++)
{
scanf("%d",&d[i]);
}
scanf("%d",&s);
for(i=0;i<s;i++)
{
v=v+d[i];
}
printf("%d",v);
}
