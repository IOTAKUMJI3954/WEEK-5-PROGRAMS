#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
    printf("the duplicate elements are:");
	for(int i=0;i<n-1;i++)
	for(int j=n-1;j>i;j--)
	{
		if(a[i]==a[j])
		{
		printf("%d ",a[i]);
		break;
		}
	}
	return 0;
}