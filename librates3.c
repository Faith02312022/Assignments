#include<stdio.h>
//#include<stdlib.io>

int main()
{
    //<= 7 days= 20ksh
    // >=8 days && <=14 days = 50ksh
    // > 15days = 100 ksh
    //declare variables
    float daysOverdue;
    float charges;
    
    //prompt user for input
    printf("Enter days overdue:");
    scanf("%f", &daysOverdue);
    
    if (daysOverdue <= 7) {
     printf("Please pay kshs:", 20 * &daysOverdue);
    }
    printf("Hello world!");
    return 0;
}