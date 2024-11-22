# include <stdio.h>
int main( ){
    int n,x;
     char c;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int temp;
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    printf("value of x:");
    scanf("%d",&x);
    printf("ceiling(c) or floor(f):");
    scanf("%c",&c);
    for(int i=0;i<n;i++){
        if(c=='c'){
        if(a[i]>x){
            printf("the ceiling of %d:%d",a[i],x);
        }}
        if(c=='f'){
            if(a[i]<x){
            printf("the floor of %d:%d",a[i],x);
        }}
    }