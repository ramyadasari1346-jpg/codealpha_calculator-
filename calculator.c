#include <stdio.h>
// Name: Ramya
// Roll No: 24S41A0456
// CodeAlpha Task 1 - Calculator

int main()
{
    int choice;
    float a, b;
    float result;

    printf("Simple Calculator - by Ramya\n");
    printf("1. addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch(choice)
    {
        case 1:
            result = a + b;
            printf("Answer = %f", result);
            break;
        case 2:
            result = a - b;
            printf("Answer = %f", result);
            break;
        case 3:
            result = a * b;
            printf("Answer = %f", result);
            break;
        case 4:
            if(b == 0)
                printf("Cannot divide by zero");
            else
            {
                result = a / b;
                printf("Answer = %f", result);
            }
            break;
        default:
            printf("Wrong choice");
    }

    printf("\nThank you - Ramya");
    return 0;
}
