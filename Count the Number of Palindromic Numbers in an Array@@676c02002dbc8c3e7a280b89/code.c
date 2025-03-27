#include<stdio.h>
int palindrome(int n, int arr[]){
    int rev=0, r, count =0;
    int org = arr[];
    for(int i=0; i<n-1; i++){
        while(arr[i]!=0){
            r = arr[i]%10;
            rev = rev*10 + r;
            arr[i] = arr[i]/10;
        }
        return rev;
    if (org == rev)
        return count ++;
    else
        return 0;
    }
    
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