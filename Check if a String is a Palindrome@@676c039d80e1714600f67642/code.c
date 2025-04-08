#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%d", str);
    int length = strlen(str);
    int original = str;
    for(int i=length-1; i>=0; i--){
         int reversed[] = str[i];
    }
    if(reversed == original ){
        printf("YES");
    }
    else{
        printf("NO");
    }
}