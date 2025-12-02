// 3. Write a program that uses a do-while loop to repeatedly ask the user for a number until they enter 0; finally, print the sum of all entered numbers.

#include <stdio.h>

int main() {
    int number, sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);

    printf("The sum of all entered numbers is: %d\n", sum);
    
    return 0;
}