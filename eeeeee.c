#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[50];
	int i,n,count=0;
	printf("ENTER THE INPUT STRING:\n");
	gets(a);
	n=strlen(a);
	printf("THE LENGTH OF STRING IS %d",n);
	for(i=0;i<n;i++)
	{
		if(isalpha(a[i]))
		{
			count++;
		}
	}
	printf("\nTHE NO.OF.CHARCTERS IN THE GIVEN STRING IS %d",count);
  return 0;
}
