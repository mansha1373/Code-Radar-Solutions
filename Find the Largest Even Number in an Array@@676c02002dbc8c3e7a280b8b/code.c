#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max=-1;
    for(int i=0; i<n; i++){
        if (arr[i]%2==0 && max>arr[i]){
            max= arr[i],
            }
        }
        if (max!=-1){
            printf("%d", max);
        }
        else{
            printf("-1");
        }
        
    }
