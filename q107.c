/*
Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1
*/
#include <stdio.h>
void previous_greater_elements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prev_greater = -1; 
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
            }
        }
        printf("%d", prev_greater);
        if (i < n - 1) {
            printf(", "); 
        }
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    previous_greater_elements(arr, n);
    return 0;
}
