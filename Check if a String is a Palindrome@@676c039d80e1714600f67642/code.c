#include<stdio.h>
#include<string.h>
int main(){
    char str[100], reversed[100];
    scanf("%s", str);
    int length = strlen(str);
    for(int i=0; i<length; i++){
          reversed[i] = str[length-i-1];
    }
    reversed ="\0";
    if(strcmp(str, reversed)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}