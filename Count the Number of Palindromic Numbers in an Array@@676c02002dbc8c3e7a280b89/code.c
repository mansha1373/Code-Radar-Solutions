#include<stdio.h>
int palindrome(int n, int arr[]){
    int count =0;
    
    for(int i=0; i<n; i++){
        int rev=0, r;
        int org = arr[i];
        while(arr[i]!=0){
            r = arr[i]%10;
            rev = rev*10 + r;
            arr[i] = arr[i]/10;
        }
    if (org == rev)
        count++;

    }
    return count;    
}
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", palindrome(n, arr));
    return 0;
}