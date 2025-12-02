// Define an enum Weekday { MON, TUE, WED, THU, FRI, SAT, SUN }. Read an integer(0-6) from the user and print the corresponding weekday name.Print "Invalid input" if the input is not in the range 0-6.

#include <stdio.h>

enum weekDay {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum weekDay today;
    today = 1;
    if(today < SUNDAY || today > SATURDAY) {
        printf("Invalid input\n");
        return 1;
    }
    else{
    printf("Today is: %d\n", today);  
    }
    return 0;
}

