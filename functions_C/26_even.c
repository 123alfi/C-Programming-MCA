#include <stdio.h>

int even(int n) {
    return n % 2 == 0;
}

int main() {
    int n;

    scanf("%d", &n);

    if(even(n))
        printf("Even");
    else
        printf("Odd");

    return 0;
}
