#include<stdio.h>
void max_freq(int n, int arr[], int *maxfreq, int *maxele){
    int freq[100]={0};
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
     *maxfreq =0;
    for(int i=0; i<100; i++){
        if(freq[i]> *maxfreq){
            *maxfreq = freq[i];
            *maxele = i;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    forin(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int maxele;
    max_freq(n, arr, &maxfreq, &maxele);
    printf("%d", maxele);
    
}