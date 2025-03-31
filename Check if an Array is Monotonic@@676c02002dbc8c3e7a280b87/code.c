#include<stdio.h>
int ascend(int n, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1])
        return o;
    }
    return 1;

}
int descend(int n, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i]<arr[i+1])
        return 0;
    }
    return 1;
}
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    if(ascend(n, arr)||descend(n, arr)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}