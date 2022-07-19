#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
} WeekDays;

int main(){
    printf("\n\n=== DAYS OF THE WEEK ===\n\n");

    printf("Monday/Sunday: %d/%d\n", MONDAY, SUNDAY);

    WeekDays day;
    printf("Enter a day of the week: ");
    scanf("%u", &day);

    switch (day)
    {
    case MONDAY:
        printf("Day %d is Monday\n", day);
        break;
    case TUESDAY:
        printf("Day %d is Tuesday\n", day);
        break;
    case WEDNESDAY:
        printf("Day %d is Wednesday\n", day);
        break;
    case THURSDAY:
        printf("Day %d is Thursday\n", day);
        break;
    case FRIDAY:
        printf("Day %d is Friday\n", day);
        break;
    case SATURDAY:
        printf("Day %d is Saturday\n", day);
        break;
    case SUNDAY:
        printf("Day %d is Sunday\n", day);
        break;
    default:
        printf("Day has a unknown value!\n");
        break;
    }

    printf("\n\n=== Monster Mash ===\n\n");
    return EXIT_SUCCESS;
}


