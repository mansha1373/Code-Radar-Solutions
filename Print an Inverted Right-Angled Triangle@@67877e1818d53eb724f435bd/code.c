#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=0; j<n-i+1; j++){
            printf("*");
        } 
    }
}