#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to check leap year:");
    scanf("%d", &year);

    if (year % 2 == 0 && year % 100 != 0)
    {
        printf("This is leap year");
    }
    else
    {
        printf("This is not leap year");
    }
    return 0;
}