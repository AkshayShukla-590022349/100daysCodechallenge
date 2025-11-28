// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count[10] = {0};
    while(n > 0){
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    int max_count = 0;
    int result = -1;
    for(int i=0; i<10; i++){
        if(count[i] > max_count){
            max_count = count[i];
            result = i;
        }
    }
    printf("%d\n", result);
    return 0;
}
