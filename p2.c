#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter n:\n");
	scanf("%d",&n);
	int *a=malloc(n*sizeof(int));
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	int max=a[0];
	for(i=0;i<n;i++)
	if(max<a[i])
	max=a[i];
	printf("The maximum number is %d",max);
	free(a);
	return 0;
}
