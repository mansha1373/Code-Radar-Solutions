#include <stdio.h>
int main() {
    int a, b, ans;
    char c;

    scanf("%d%d%c", &a, &b ,&c);
    if (c== '+'){
        ans = a+b;
        printf("%d", ans);
    }
    else if (c== '-'){
        ans = a-b;
        printf("%d", ans);
    }
    else if (c== '*'){
        ans = a*b;
        printf("%d", ans);
    }
    else if (c== '/'){
        ans = a/b;
        printf("%d", ans);
    }
    else{
        printf("error");
    }
    return 0;
}