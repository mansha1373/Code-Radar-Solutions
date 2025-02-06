#include <stdio.h>

int is_prime(int n) {
    if (n < 2) 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; 
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (is_prime(num)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    
return 0;
}