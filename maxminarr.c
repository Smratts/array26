#include<stdio.h>
int main()
{
	int a[50],size,i,max,min;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter the value in  array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];

	for (i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}	
	}
	min=a[0];
	for (i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}

	}
			printf("maximum value of array:%d\n",max);
	         	printf(" minimum value of array:%d\n ",min);
}
