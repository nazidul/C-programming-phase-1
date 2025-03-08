
#include<stdio.h>

int main()
{
    int rows, cols, i, j;

    /*input rows and columns from user */
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &cols);

    /*iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /*iterate through columns */
        for(j=1; j<=cols; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
