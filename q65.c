
// Search in a sorted array using binary search.
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
    int left = 0, right = n-1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == x){
            printf("Found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    printf("-1\n");
    return 0;
}
