#include<stdio.h>
int count(int n, int num, int arr[]){
    int count =0;
    for(i=0; i<n; i++){
        if(arr[i]>num){
            count++;
        }
    }
    return count;
}
int main(){
    int n; 
    scanf("%d", &n);
    int num;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", count(n, num, arr));
}