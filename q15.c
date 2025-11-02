#include <stdio.h>

void rotateClockwiseByOne(int arr[], int n) {
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];}
    arr[0] = last;}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}

    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    rotateClockwiseByOne(arr, n);
    printf("\nArray after clockwise rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    printf("\n");
    return 0;}