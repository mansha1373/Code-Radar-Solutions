#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int even_sum=0, odd_sum=0;
    for(i=1; i<n; i++){
        if(arr[i]%2==0){
            even_sum += 1;
        }
        else{
            odd_sum += 1; 
        }
    }
    printf("%d", even_sum);
    printf(" %d", odd_sum);
    return 0;

}