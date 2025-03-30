#include<stdio.h>
int sum(int n, int arr[]){
   
    for(int i=0; i<n; i++){
        int r;
         int digisum=0;
        while(arr[i]!=0){
            r = arr[i]%10;
            arr[i]= arr[i]/10;
            digisum+=r;
            
        }
    }
            return digisum;

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);  
}
printf(" %d", sum(n, arr));
return 0;
}