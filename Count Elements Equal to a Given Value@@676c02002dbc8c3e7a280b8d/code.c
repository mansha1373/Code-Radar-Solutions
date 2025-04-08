#include<stdio.h>
int count(int n, int num, int arr[]){
    for(int i=0; i<n; i++){
        int count=0;
        if(arr[i]==num){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int num;
    scanf("%d", &num);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", count(n, num, arr));
    return 0;
}