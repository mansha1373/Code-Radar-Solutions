#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    scanf("%s", str);
    int length = strlen(str);
    int count =0;
    for(int i=0; i<length; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}