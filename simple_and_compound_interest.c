#include <stdio.h>
#include <math.h>

void calculateSimpleInterest() {
    double principal, rate, time, simpleInterest;

    // Input values
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter time (in years): ");
    scanf("%lf", &time);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);

    // Calculate simple interest
    simpleInterest = (principal * time * rate) / 100;

    // Display result
    printf("Simple Interest = %.2lf\n", simpleInterest);
}

void calculateCompoundInterest() {
    double principal, rate, time, compoundInterest, amount;
    int n;

    // Input values
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter time (in years): ");
    scanf("%lf", &time);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter number of times interest applied per year: ");
    scanf("%d", &n);

    // Calculate compound interest
    amount = principal * pow((1 + rate / (n * 100)), n * time);
    compoundInterest = amount - principal;

    // Display result
    printf("Compound Interest = %.2lf\n", compoundInterest);
}

int main() {
    int choice;

    // Menu for user selection
    printf("Choose an option:\n");
    printf("1. Calculate Simple Interest\n");
    printf("2. Calculate Compound Interest\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            calculateSimpleInterest();
            break;
        case 2:
            calculateCompoundInterest();
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}