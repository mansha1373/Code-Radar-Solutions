#include<stdio.h>
int main(){
    int n, prime_count=0;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int isPrime = 1; 

        if ( arr[i] <= 1) {
            isPrime = 0; 
        } else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        }

        if (isPrime) {
            prime_count++;
        }
    printf("%d", prime_count);
    return 0;
}