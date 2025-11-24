#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4;
    float total, percentage, average;

    printf("Enter sub1: ");
    scanf("%f", &sub1);

    printf("Enter sub2: ");
    scanf("%f", &sub2);

    printf("Enter sub3: ");
    scanf("%f", &sub3);

    printf("Enter sub4: ");
    scanf("%f", &sub4);
    
    total = sub1 + sub2 + sub3 + sub4;
    percentage = (total / 400.0) * 100; // correct calculation
    average = total / 4.0;

    printf("\nTotal = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);
    printf("\nAverage = %.2f\n", average);

    return 0;
}
