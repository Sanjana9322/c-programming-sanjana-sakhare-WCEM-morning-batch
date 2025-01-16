#include <stdio.h>
int main() {
    int product = 1, n, i = 1;
    printf("Enter N: ");
    scanf("%d", &n);
    while (i <= n) {
        product *= i;
        i++;
    }
    printf("Product: %d", product);
    
}
