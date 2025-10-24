 #include <stdio.h>

    // Method 1: Using a temporary variable
    void swapWithTemp(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    // Method 2: Using arithmetic (addition and subtraction)
    void swapWithArithmetic(int *a, int *b) {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }

    // Method 3: Using bitwise XOR
    void swapWithXOR(int *a, int *b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }

    // Method 4: Using pointer swapping
    void swapWithPointers(int **a, int **b) {
        int *temp = *a;
        *a = *b;
        *b = temp;
    }

    int main() {
        int x, y;
        printf("Enter two integers to swap (x and y): ");
        scanf("%d %d", &x, &y);

        printf("Original values: x = %d, y = %d\n", x, y);

        // Method 1: Temporary variable
        swapWithTemp(&x, &y);
        printf("After swap with temp variable: x = %d, y = %d\n", x, y);

        // Re-swap to restore original values
        swapWithTemp(&x, &y);

        // Method 2: Arithmetic
        swapWithArithmetic(&x, &y);
        printf("After swap with arithmetic: x = %d, y = %d\n", x, y);

        // Re-swap to restore original values
        swapWithArithmetic(&x, &y);

        // Method 3: Bitwise XOR
        swapWithXOR(&x, &y);
        printf("After swap with XOR: x = %d, y = %d\n", x, y);

        // Re-swap to restore original values
        swapWithXOR(&x, &y);

        // Method 4: Pointer swapping (only works when called with pointers to the variables)
        int *px = &x, *py = &y;
        swapWithPointers(&px, &py);
        printf("After swap with pointers: x = %d, y = %d\n", *px, *py);

        return 0;
    }