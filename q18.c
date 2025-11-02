#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int found = 0;
    printf("Duplicate elements are: ");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j])
                break;
        }
        if(j < i)
            continue;
    }

    if(!found)
        printf("-1");

    printf("\n");
    return 0;
}