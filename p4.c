#include <stdio.h>

int main() {
    int n,temp;
    printf("enter n:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    if (n%2==0){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;}}}
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}