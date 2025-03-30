#include<stdio.h>
int sum(int n, int arr[]){

    for(int i=0; i<n; i++){
        int sum=0, r;
        while(arr[i]!=0){
            r = arr[i]%10;
            arr[i]= arr[i]/10;
            sum+=arr[i];
            
        }
        return sum;
    }

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);  
}
printf("%d", sum(n, arr));
return 0;
}