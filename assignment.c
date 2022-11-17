#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int active = 0;

    do
    {
        printf("Enter an integer: \n");
        printf("Enter 1 to check the odd even property of your candidate number. \n");
        printf("Enter 2 to solve the quadratic equation. \n");
        printf("Enter 3 to call the exponent function. \n");
        printf("Enter 4 to input the array and calculate the product of the data. \n");
        printf("Enter 5 to find the minimum and maximum from five numbers. \n");
        printf("Enter 6 to load the data file. \n");
        printf("Enter 7 to exit. \n");
        printf("\n");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            printf("TEST");
            active = 1;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("An invalid input was given. Please try again \n");
            break;
        }
    } while (active == 0);
    return 0;
}
