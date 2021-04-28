/*
* Project name: calculator
--------------------------------------------
    ID:9931007
    Name:mojtaba bizarar
    Mail:mobi@aut.ac.ir
--------------------------------------------
*/
#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;                 // input values
    char op;                        // operator
    double result;                     // output

    printf("Choose operation to perform (+, -, *, /, %%, sin, cos, tan): ");
    scanf(" %c", &op);

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // do the operation
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("invalid input! divide by zero");
                return -1;
            } else {
                result = num1 / num2;
            }
            break;
        case '%':
            if ((num1 - (int) num1 == 0) && (num2 - (int) num2) == 0) {
                result = (int) num1 % (int) num2;
            } else {
                printf("incorrect input");
                return 0;
            }
            break;
        case 's':
            result = sin(num1 / num2);
            break;
        case 'c':
            result = cos(num1 / num2);
            break;
        case 't':
            result = tan(num1 / num2);
            break;
    }

    // print result
    switch (op) {
        case 's':
            printf("result : sin(%lf/%lf) = %lf", num1, num2, result);
            break;
        case 'c':
            printf("result : cos(%lf/%lf) = %lf", num1, num2, result);
            break;
        case 't':
            printf("result : tan(%lf/%lf) = %lf", num1, num2, result);
            break;
        default:
            printf("result : %lf %c %lf = %lf", num1, op, num2, result);
    }
    
    return 0;
}
