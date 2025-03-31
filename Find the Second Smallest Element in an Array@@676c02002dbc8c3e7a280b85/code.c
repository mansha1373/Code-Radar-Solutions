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
void secsmallest(int n, int arr[n]){
   sort(n,arr);
   int sec_smallest = arr[1];

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    if(secsmallest(n,arr)){
        printf("%d", secsmallest);
    }
    else{
        printf("-1");
    }
    return 0;
    
}