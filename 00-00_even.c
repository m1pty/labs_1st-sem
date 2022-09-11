#include <stdio.h>
#include <stdlib.h>

// int even(int x);
int even(int x){
    if (x % 2 == 1){
        x = x + 1;
    }
    return x;
}

int main(){
    int n = 0;
    scanf("%d", &n);
    n = even(n);
    printf("Result: %d\n", n);
    return 0;
}
