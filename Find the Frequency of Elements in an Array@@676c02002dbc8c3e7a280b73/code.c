#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d", &n);
    int arr[n], freq=0;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        printf("%d %d", arr[i], freq);
        }
       
        return 0;
       
    }
