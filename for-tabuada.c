#include <stdio.h>

int main(){
    int n, total = 0, i;

    scanf("%d", &n);

    for( i = 1; i <= 10; i++){
        total = n * i;
        printf("%d x %d = %d\n", n, i, total);
    }
    //printf("%d x %d = %d", n, i, total);

    return 0;
}