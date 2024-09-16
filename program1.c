#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);




int main() {
    int num1, num2;
    int sum, diff, prod;
    float quotient;

printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the functions
    sum = add(num1, num2);
    diff = subtract(num1, num2);
    prod = multiply(num1, num2);
    quotient = divide(num1, num2);

    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, diff);
    printf("Multiplication: %d * %d = %d\n", num1, num2, prod);
    

    if (num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, quotient);
    } 
    else 
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}


int add(int a, int b) {
    return a + b;
}


int subtract(int a, int b) {
    return a - b;
}


int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}
