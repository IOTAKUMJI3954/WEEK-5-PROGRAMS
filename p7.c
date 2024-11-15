#include <stdio.h>

int main() {
    int n,temp,v,c;
    printf("enter n:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter v:");
    scanf("%d",&v);
    for(int i=0;i<n;i++){
        if(v==array[i]){
         c+=1;}
    }
     printf("occurence of %d is %d times ",v,c);
    return 0;
}