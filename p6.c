#include <stdio.h>

int main() {
    int n,temp,v,t;
    printf("enter n:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(array[j]>array[j+1]){
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;}}}
    printf("\n");
    printf("at what number:");
    scanf("%d",&t);
    printf("%d smallest at index %d is:%d\n",t,t-1,array[t-1]);
    printf("%d largest at index %d is:%d",t,n-t,array[n-t]);
    return 0;
}
