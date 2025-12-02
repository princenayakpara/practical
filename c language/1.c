// 1.  Write a re ursive function to  compute the sum of the digits of a number


#include <stdio.h>
int sum(int n) {
    
    if (n == 0) {
        return 0;
    }
    
    return (n % 10) + sum(n / 10);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sum(number);
    printf("The sum of the digits is: %d\n", result);
    
    return 0;
}