// Define an enum Weekday { MON, TUE, WED, THU, FRI, SAT, SUN }. Read an integer(0-6) from the user and print the corresponding weekday name.Print "Invalid input" if the input is not in the range 0-6.

#include <stdio.h>

enum Weekday { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    int n;
    const char weekdays[] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    printf("Enter a number (0-6): ");
    scanf("%d", &n);

    if (n < 0 || n > 6) {
        printf("Invalid input\n");
    } else {
        printf("%s\n", weekdays[n]);
    }

    return 0;
}
