#include<stdio.h>
int main(){
	int n,i;
	int max,min;
	float sum=0.0,average;
	printf("enter how many elements in array:");
	scanf("%d",&n);
	int array[n];
	printf("enter the elements:\n");
	for( i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	max=min=array[0];
	for(i=0;i<n;i++){
	
	   if(array[i]<min)
	    min=array[i];
	   if (array[i]>max)
	   max=array[i];
	  sum+=array[i];}
	average=sum/n;
	printf("maximum of the number:%d\n",max);
	printf("minimum of the number:%d\n",min);
	printf("average of the number:%f\n",average);
	}