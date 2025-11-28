/*
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int left = 0, right = n - 1;
    int result = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] >= x){
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    printf("%d\n", result);
    return 0;
}
