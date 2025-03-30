#include<stdio.h>
#include<stdlib.h>
int sum(int n, int arr[]){
    arr[]= abs(arr[]);
    for(int i=0; i<n; i++){
        int r;
         int digisum=0;
        while(arr[i]!=0){
            r = arr[i]%10;
            arr[i]= arr[i]/10;
            digisum+=r;
            
        }
       printf("%d ",digisum);
    }

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);  
}
sum(n, arr);
return 0;
}