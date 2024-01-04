#include<stdio.h>

// Function to calculate factorial recursively
int calculateFactorial(int num) {
    if (num <= 0) {
        return 1;  // Base case: factorial of 0 is 1
    } else {
        return num * calculateFactorial(num - 1);  // Recursive call
    }
}

int main() {
    int num, fact;

    // Take user input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num >= 0) {
        // Calculate factorial using the function
        fact = calculateFactorial(num);

        // Print the result
        printf("%d is the factorial of %d\n", fact, num);
    } else {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }

    return 0;
}
