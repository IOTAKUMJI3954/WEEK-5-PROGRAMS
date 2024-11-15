#include<stdio.h>
int main()
{
	int i,j,n,t,c=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	int b[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n-1;j++)
	for(i=n-1;i>j;i--)
	{
	    if (a[j]==a[i]){
	        t=a[i];
	        goto f;
	    }}
	f:printf("the first repeating element is %d",t);
	return 0;
}