#include<stdio.h>
int main()
{
	int n,i,j,t,s,k;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++){
	  b[i]=a[i];
	}
	printf("the copied elements in the another array are:");
	for(int i=0;i<n;i++){
	    printf("%d\n",b[i]);
	}
	return 0;
}
