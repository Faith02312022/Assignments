#include<stdio.h>

int main(){
    //if daysOverdue <= 7 days= 20ksh
    // "" >=8 days && <=14 days = 50ksh
    // "" >= 15days = 100 ksh
    //declare variables
    int daysOverdue;
    float charges;
    
    //prompt user for input
    printf("Enter days overdue:");
    scanf("%d", &daysOverdue);
    
    charges = daysOverdue * 20 ;
    
    
    if (daysOverdue < 7){
     printf("%f", &charges);
    }
    else{
    printf(" hahaha");
    }
    return 0;
    }