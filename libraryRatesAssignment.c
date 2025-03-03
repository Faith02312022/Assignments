#include<stdio.h>
int main(){
    int days;
    float charges;
    float charges1;
    float charges2;
    
    //prompt user for input
    printf("Enter days Overdue:");
    scanf("%d", &days);
    
    //charges per days overdue
    charges= days * 20;
    charges1= days * 50;
    charges2= days *100;
    
    //conditions
    if (days <= 7){
    printf("charges is :" "%.2f", charges);
    }
    else if (days >= 8 && days <=14){
    printf("charges is :" "%.2f", charges1);
    }
    else if (days >= 15){
    printf("charges is :" "%.2f", charges2);
    }
    else{
    printf("invalid");
    }
    return 0;
    }