#include <stdio.h>
int main() {
    int n,p=1;
    scanf("%d", &n);
    for (int i=1; i <11; i++){
       p = n*i; 
    }
      printf("%d x %d = %d\n", n,i,p );
    return 0;
}