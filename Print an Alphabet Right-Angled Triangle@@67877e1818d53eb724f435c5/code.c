#include<stdio.h>
int main(){
    int n,i,j;
    char ch;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            ch = 'A';
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}