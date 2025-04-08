#include<stdio.h>
#include<string.h>
int main(){
    char str[100], reeversed[100];
    scanf("%s", str);
    int length = strlen(str);
    for(int i=length-1; i>=0; i--){
          reversed[i] = str[i];
    }
    if(strcmp(str, reversed)=0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}