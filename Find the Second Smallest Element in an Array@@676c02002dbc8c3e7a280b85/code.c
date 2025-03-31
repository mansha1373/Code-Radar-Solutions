#include<stdio.h>
void sort(int n, int arr[]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void sec_smallest(int n, int arr[n]){
   sort(n,arr);
   int smallest_2 = arr[1];
   printf("%d",smallest_2);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    sec_smallest(n, arr);
    return 0;
    
}