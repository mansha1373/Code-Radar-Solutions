#include<stdio.h>
int main(){
    int n, prime_count=0;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i];)
    }

    for(i=0; i<n; i++){
        if(arr[i]%i !=0){
           prime_count++;
        }
        else{

        }
    }
    printf("%d", prime_count);
    rewturn 0;
}