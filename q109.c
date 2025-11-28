/*
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700
*/
#include <stdio.h>
int main(){
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    int max_sum = 0;
    for(int i = 0; i < k; i++){
        max_sum += arr[i];
    }
    
    int current_sum = max_sum;
    for(int i = k; i < n; i++){
        current_sum += arr[i] - arr[i - k];
        if(current_sum > max_sum){
            max_sum = current_sum;
        }
    }
    
    printf("Maximum sum of subarrays of size %d is: %d\n", k, max_sum);
    return 0;
}
