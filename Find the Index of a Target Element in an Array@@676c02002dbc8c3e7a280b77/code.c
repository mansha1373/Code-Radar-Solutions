#include<stdio.h>
int search(int n, int arr[], int num){
    for(int i=0; i<n; i++){
        if(arr[i]==num)
        return i;
    }
    return -1;
}
int main(){
       int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int num; 
    scanf("%d", &num); 
    
printf("%d", search(n,arr,num));
return 0;
}
