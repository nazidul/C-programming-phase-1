
#include<stdio.h>

int main()
{
    int i,j, rows;

    /* input number of rows to print */
    printf("Enter number of rows:");
    scanf("%d", &rows);

    /*iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /*print leading spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        /*Print star*/
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        /*Move to next line */
        printf("\n");
    }
return 0;
}
