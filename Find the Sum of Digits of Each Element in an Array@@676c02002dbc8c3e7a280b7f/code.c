#include<stdio.h>
int sum(int n, int arr[]){
    int digisum=0
    for(int i=0; i<n; i++){
        int r;
        while(arr[i]!=0){
            r = arr[i]%10;
            arr[i]= arr[i]/10;
            digisum+=r;
            
        }
        return digisum;
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