#include<stdio.h>
#include<stdlib.h>
int sum(int n, int arr[]){
    int i;
    int num = abs(arr[i]);
    for(int i=0; i<n; i++){
        int r;
         int digisum=0;
        while(num!=0){
            r = num%10;
            num= num/10;
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