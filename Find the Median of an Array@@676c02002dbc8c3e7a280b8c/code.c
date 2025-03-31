#include<stdio.h>
int main(){
   int i;
   scanf("%d",&n);
   int arr[i];
   for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
   } 
   for(i=0; i<n; i++){
     int sum =0;
     sum+= arr[i];
   }
   int med= sum/n;
   printf("%d", med);
   return 0;
}