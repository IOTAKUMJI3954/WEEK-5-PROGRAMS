#include <stdio.h>

int main() {
    int n,c=0, duplicate=0;
    printf("enter n:");
    scanf("%d",&n);
    int array[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
         int k=0;
      for(int j=0;j<c;j++){
          if(b[j]==array[i])
           k+=1;}
           b[c++]=array[i];
          if(k>=1)
           printf("the duplicate element is:%d\n",array[i]);}
    return 0;
}