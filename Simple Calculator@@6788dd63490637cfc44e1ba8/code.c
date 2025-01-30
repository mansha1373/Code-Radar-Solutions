#include <stdio.h>
int main() {
    int a, b, ans;
    char c;

    scanf("%d%d%c", &a, &b ,&c);
    if (c=="+"){
        printf("%d", ans=a+b);
    }
    else if (c=="-"){
        printf("%d", ans=a-b);
    }
    else if (c== "*" ){
        printf("%d", ans=a*b);
    }
    else if (c== "/"){
        printf("%d", ans=a/b);
    }
    else{
        printf("error");
    }
    return 0;
}