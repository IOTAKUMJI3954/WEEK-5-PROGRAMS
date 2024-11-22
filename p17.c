#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n],b[n],counted[n];
	for(int i=0;i<n;i++){
	    counted[i]=0;
	}
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++){
	    int c=1;
	    if(counted[i]==1)
	    continue;
	  for(int j=i+1;j<n;j++){
	      if(a[i]==a[j]){
	          c++;
	          counted[j]=1;
	      }
	  }
	  printf("the frequency of the number %d is %d\n",a[i],c);
	  }
	return 0;
}
