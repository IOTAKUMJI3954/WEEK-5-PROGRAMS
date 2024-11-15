#include<stdio.h>
int main(){
	int i,n,y=0,t=0,j;
	printf("enter n:");
	scanf("%d",&n);
	int array[n];
	int max,min,sum;
	for( i=0;i<n;i++){
		scanf("%d",&array[i]);
	    sum+=array[i];
	}
		max = array[0];
		min = array[0];
	for( j=0;j<n;j++){
		if (array[j]>max){
			max = array[j];
			y=j;
		}
		if (array[j]<min){
			min = array[j];
			t=j;
		}	
	}
	printf("%d is maximum at index %d\n", max,y);
	printf("%d is minimum at index %d\n", min,t);
	printf("sum of the numbers in array%d ",sum);
	return 0;
}
