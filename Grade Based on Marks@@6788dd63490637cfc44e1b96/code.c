#include <stdio.h>
int main() {
    int mark;
    scanf("%d", &mark);
    if( mark>=90){
        printf("A");
    }
    else if(mark>=80){
        printf("B");
    }
    else if(mark>= 70){
        printf("C");
    }
    else if(mark>=60 ){
        pritnf("D");
    }
    else{
        printf("F");
    }
    return 0;
}