/* intertion in array */
#include<stdio.h>

int main()
{	int i,n,arr[100],num,m;
	printf("\nsize of array\n");
	scanf("%d",&n);
	printf("Enter elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);	
	}
	printf("\nEnter new value\n");
	scanf("%d",&num);
	printf("\nEnter position of array\n");
	scanf("%d",&m);
	if(m<=0||m>n+1)
	{
		printf("invelid position");
	}
	else
	{
		for(i=n-1;i>m-1;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[m-1]=num;
	}
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);	
	}
	
return 0;		
}
