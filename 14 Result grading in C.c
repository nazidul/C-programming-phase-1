/*
#include<stdio.h>

void main()
{
    int marks;
    printf("Enter 1 if marks are greater than 80\n");
    printf("Enter 2 if marks are between 70-80\n");
    printf("Enter 3 if marks are between 50-70\n");
    printf("Enter 4 if marks are between 35-50\n");
    printf("Enter 5 if marks are less than 35\n");
    printf("Enter your marks:\n");

    scanf("%d", &marks); // Get user input


    switch(marks)
    {
    case 1:
        printf("Grade A+");
    case 2:
        printf("Grade A");
    case 3:
        printf("Grade B");
    case 4:
        printf("Grade C");
    case 5:
        printf("Fail");
    break;
    default:
        printf("invalid choice\n");
    break;
    }
}
*/
#include <stdio.h>

void main() {
    int marks;

    printf("Enter your marks (0-100):\n");
    scanf("%d", &marks); // Capture the user's marks

    switch (marks / 10) { // Use marks divided by 10 for range checking
        case 10: // For marks = 100
        case 9:  // For marks in range 90-99
        case 8:  // For marks in range 80-89
            printf("Grade A+\n");
            break;
        case 7:  // For marks in range 70-79
            printf("Grade A\n");
            break;
        case 6:  // For marks in range 60-69
        case 5:  // For marks in range 50-59
            printf("Grade B\n");
            break;
        case 4:  // For marks in range 40-49
            printf("Grade C\n");
            break;
        default: // For marks less than 40 or invalid inputs
            if (marks >= 0 && marks < 40)
                printf("Fail\n");
            else
                printf("Invalid marks\n");
            break;
    }
    return 0;
}
