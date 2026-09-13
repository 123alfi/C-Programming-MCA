#include <stdio.h>

int main() {
    int a[100], n, i, element, count = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &element);

    for(i = 0; i < n; i++) {
        if(a[i] == element)
            count++;
    }

    printf("%d", count);

    return 0;
}