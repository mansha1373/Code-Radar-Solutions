#include<stdio.h>
#include<string.h>
int main(){
    char str[100], reversed[100];
    scanf("%s", str);
    int length = strlen(str);
    for(int i=length-1; i>=length/2; i--){
          reversed[i] = str[i];
    }
    reversed[length] = '\0';
    if(strcmp(str, reversed)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}