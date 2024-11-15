#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n], count[100] = {0}; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++; 
    }
    for (int i = 0; i < n; i++) {
        if (count[a[i]] == 1) {
            printf("The first non-repeating element is %d\n", a[i]);
            return 0;
        }
    }
    printf("No non-repeating element found\n");
    return 0;
}