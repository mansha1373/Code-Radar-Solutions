#include <stdio.h>
#include <ctype.h>
int main() {
    char chara;
    scanf("%c", &chara);
    if (isupper(chara))
    {
        printf("Uppercase");
    }
    else if (islower(chara))
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}