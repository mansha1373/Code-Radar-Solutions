#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (isdigit(ch)){
        printf("Digit");
    } 
    else if (isalpha(ch)){
        char lower = tolower(ch)
        if ( lower == a || lower == e || lower == i || lower == o || lower == u){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}