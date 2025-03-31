#include<stdio.h>
void count_freq(int n, int arr[n]){
    int freq[100] ={0};
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for(int i=0; i<100; i++){
        if(freq[i]>0){
            printf("%d %d", i, freq[i]);
        }
    }
}
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
         scanf("%d", &arr[i]);
    }
    count_freq(n,arr);
    return 0;
   
}