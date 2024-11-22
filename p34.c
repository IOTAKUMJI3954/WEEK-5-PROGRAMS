#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,s=0,t=0,o;
    printf("enter n(even integer):");
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n/2;i++){
        s=s+b[i];}
        printf("sum of first half:%d\n",s);
    for(int i=n/2;i<n;i++){
        t=t+b[i];}
        printf("sum of second half:%d\n",t);
    o=t-s;
    if(o>0){
        printf("left half has to be balanced by adding %d",abs(o));
    }
    else if(o==0)
      printf("perfectly balanced");
    else
      printf("right half has to be balanced by adding %d",abs(o));
      return 0;