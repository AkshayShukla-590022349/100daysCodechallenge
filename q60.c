// Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, i, posCount = 0, negCount = 0, zeroCount = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }
    printf("Positive=%d, ", posCount);
    printf("Negative=%d, ", negCount);
    printf("Zero=%d\n", zeroCount);
    return 0;
}
