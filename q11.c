#include <stdio.h>
int main() {
    int n,i,even_n=0,odd_n=0;
    printf("Enter the number of scores: ");
    scanf("%d", &n);
    int scores[n], even_array[n], odd[n];

    printf("Enter %d scores:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for(i = 0; i < n; i++) {
        if(scores[i] % 2 == 0) {
            even_array[even_n] = scores[i];
            even_n++;
        } else {
            odd[odd_n] = scores[i];
            odd_n++;
        }
    }

    printf("\nEven Scores:\n");
    for(i = 0; i < even_n; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n\nOdd Scores:\n");
    for(i = 0; i < odd_n; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}
