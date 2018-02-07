#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("enter the number");
	scanf("%d",&a);
	b=a/100;
	c=(a-(1*100))/10;
	d=(a-(1*100+c*10));
	e=(d*100+c*10+b*1);
	if(a==e)
	printf("%d its palindro");
	else
	printf("it not palindro")
  getch();
	}
