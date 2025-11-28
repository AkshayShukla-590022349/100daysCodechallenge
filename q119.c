/*
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
Input 1:
nums1 = [1,3,3,4]
Output 1:
3
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int repeated = -1;
    for(int i = 0; i < n; i++){
        int index = arr[i] < 0 ? -arr[i] : arr[i];
        if(arr[index] < 0){
            repeated = index;
            break;
        } else {
            arr[index] = -arr[index];
        }
    }
    
    if(repeated != -1){
        printf("The repeated element is: %d\n", repeated);
    } else {
        printf("No repeated element found.\n");
    }
    
    return 0;
}
