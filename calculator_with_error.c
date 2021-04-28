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

    /*if(op == '+') {
        // the part that calculates the sum of two numbers
        result = num1 + num2;
    }
    else if(op == '-') {
        // the part that calculates the difference of two numbers
        result = num1 - num2;
    }
    else if(op == '*') {
        // the part that calculates the product of two numbers
        result = num1 * num2;
    }
    else if(op == '/') {
        // the part that calculates the division of two numbers
        // if denominator equals to zero exit the program
        if(num2 == 0) {
            printf("invalid input! divide by zero");
            return -1;
        }
        else {
            result = num1 / num2;
        }
    }
    else if(op == '%') {
        if ((num1 - (int)num1 == 0) && (num2 - (int)num2) == 0) {
            result = (int)num1 % (int)num2;
        }
        else {
            printf("incorrect input");
            return 0;
        }
    }
    else if(op == 's') {
        // the part that calculates sine of an angle
        result = sin(num1 / num2);
    }
    else if(op == 'c') {
        //the part that calculates the cosine of an angle
        result = cos(num1 / num2);
    }
    else if(op == 't') {
        // the part that calculates the tangent of an angle
        result = tan(num1 / num2);
    }
*/
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
    /*
    if (op == 's') {
        printf("result : sin(%lf/%lf) = %lf", num1, num2, result);
    } else if (op == 'c') {
        printf("result : cos(%lf/%lf) = %lf", num1, num2, result);
    } else if (op == 't') {
        printf("result : tan(%lf/%lf) = %lf", num1, num2, result);
    } else {
        printf("result : %lf %c %lf = %lf", num1, op, num2, result);
    }*/
    return 0;
}
