#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Iterative logic to find HCF (Euclidean algorithm)
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF is %d\n", a);
    return 0;
}
