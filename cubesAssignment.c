#include <stdio.h>

int main() {
    int n, i = 1; //first we are supposed to initialize the 2 variables and assign the increment(ile inaongezwa) a value of 1

    // We ask the user for his/her input
    printf("Input number of terms: ");
    scanf("%d", &n);

    // well use do...while loop for the first value in order to answer the question using both do...while and while loops
    do {
        printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
        i++;
    } while (i == 1);  // this runs only once

    // then we use while loop for the remaining numbers
    while (i <= n) {
        printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
        i++;
    }

    return 0;
}