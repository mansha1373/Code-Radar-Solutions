#include<stdio.h>
int main(){
    char str[100];
    scanf("%s", str);
    int count =0;
    while(str[count]!='\0'){
        count++;
    }
    printf("%d", count);
}