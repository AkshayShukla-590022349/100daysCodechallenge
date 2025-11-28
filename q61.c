// Search for an element in an array using linear search.
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
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
