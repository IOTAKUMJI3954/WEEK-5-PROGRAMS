#include <stdio.h>

int main() {
    int n,temp;
    printf("enter n:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;}
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}