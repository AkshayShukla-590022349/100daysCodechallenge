/*
Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    int target;
    scanf("%d", &target);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    // this is done in O(n^2) we can do it in nlogn if we sort the array and use two pointers
    printf("-1 -1\n");
    return 0;
}
