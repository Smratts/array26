#include<stdio.h>
int main()
{
int i,fac=1;
	printf("\n enter number to find factorial:  ");
	scanf("%d",&i);
	while(i>0) //while(i>=1)
	{
		fac=fac*i;
		i--;
	}
	printf("\n factorial = %d ", fac);
	return 0;
}
