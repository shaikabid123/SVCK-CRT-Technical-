#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaring variables
    float num_1, num_2;
    char cal, opr;

    printf("Want to use calculator?(Y/N) : \n");
    scanf("%c", &cal);

    // Taking input from the user

    if (cal == 'n' || cal == 'N')
    {
        printf("\nThank You !\n");
        exit(0);
    }

    else if (cal == 'y' || cal == 'Y')
    {
        printf("Choose an operator ( + , - , * , / ) : \n");
        scanf(" %c", &opr);

        printf("Enter the value of Number 1 : \n");
        scanf(" %f", &num_1);
        printf("Enter the value of Number 2 : \n");
        scanf(" %f", &num_2);

        // Using Switch case for the Operation

        switch (opr)
        {
        case '+':
            printf("Addition of Two Numbers :\n\n %.2f + %.2f = %.2f\n", num_1, num_2, (num_1 + num_2));
            break;
        case '-':
            printf("Substraction of Two Numbers :\n\n %.2f - %.2f = %.2f\n", num_1, num_2, (num_1 - num_2));
            break;
        case '*':
            printf("Multiplication of Two Numbers :\n\n %.2f * %.2f = %.2f\n", num_1, num_2, (num_1 * num_2));
            break;
        case '/':
            if (num_2 == 0)
            {
                printf("Cannot Divide by Zero !\n"); // We cannot divide any number by 0
                break;
            }
            else
            {
                printf("Division of Two Numbers :\n\n %.2f / %.2f = %.2f\n", num_1, num_2, (num_1 / num_2));
                break;
            }
        default:
            printf("Invalid Operator \n");
            break;
        }
    }

    else if (cal != 'n' && cal != 'N' && cal != 'y' && cal != 'Y')
    {
        printf("Invalid input!\n");
    }

    printf("\n Thank You !\n");

    return 0;
}