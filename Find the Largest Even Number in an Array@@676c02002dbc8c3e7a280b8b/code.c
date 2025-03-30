#include<stdio.h>
int main(){
    int n, int arr[n];
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if (arr[i]%2==0){
            for(int j=0; j<n-1; j++){
                if arr[j]> arr[j+1]
                retrun arr[j];
            }
        }
        else
        return -1;
    }
}