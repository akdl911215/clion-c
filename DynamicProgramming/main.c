#include <stdio.h>

int dp[10];
int count = 0;

int fibonacciDp(int x, char s) {
    count++;
    if (x == 1) return 1;
    if (x == 2) return 1;
    if (dp[x] != 0) return dp[x];
    return dp[x] = fibonacciDp(x - 1, 'l') + fibonacciDp(x - 2, 'r');
}


int fibonacci(int x, char s){
    count++;
    if (x == 1) return 1;
    if (x == 2) return 1;

    return fibonacci(x - 1, 'l') + fibonacci(x - 2, 'r');
}

int main() {
    printf("%d %d", fibonacciDp(5, 'a'), count);
//    printf("%d %d", fibonacci(5, 'a'), count);

return 0;
}
