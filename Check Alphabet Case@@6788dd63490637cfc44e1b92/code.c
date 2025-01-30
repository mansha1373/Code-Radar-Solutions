#include <stdio.h>
#include <ctype.h>
int main() {
    char chara;
    scanf("%d", &chara);
    if (isupper(chara)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }

    return 0;
}