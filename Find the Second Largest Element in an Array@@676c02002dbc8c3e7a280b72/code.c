#include<stdio.h>
void sort(int n, int arr[]){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}
int main(){
    int n; 
    scanf("%d", &n);
    if(n<2){
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(n, arr);
   int second_largest = -1;
   for(int i=n-2; i>=0; i--){
    if(arr[i]<arr[n-1]){
        second_largest = arr[i];
    }
   }
    printf("%d", second_largest);
    return 0;
}