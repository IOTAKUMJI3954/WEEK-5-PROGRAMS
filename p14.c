#include<stdio.h>
int main()
{
	int n,i,j,t,s,k;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter sum value\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	for(k=0;k<n;k++)
	{
		if(a[i]+a[j]+a[k]==s)
		goto sen;
	}
	printf("False");
	sen: printf("The triplet is %d,%d,%d",a[i],a[j],a[k]);
	return 0;
}