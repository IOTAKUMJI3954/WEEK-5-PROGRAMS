#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
	int a[n-1];
	printf("Enter the elements of the array\n");
	for(int i=0;i<n-1;i++)
	scanf("%d",&a[i]);
	for(int j=1;j<=n;j++){
	int found=0;
	for(int i=0;i<n-1;i++)
	{
	if(j==a[i])
	{
		found=1;
		break;
	}}
	if(found==0){
	printf("The mising element is %d",j);
	    break;}
	}
	return 0;
}