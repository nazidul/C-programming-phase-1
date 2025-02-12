//library function
#include<stdio.h>
//main function
int main()

{
    //data-type and variable decalare
    int i,j, rows;

    /*input rows to print from user*/
    printf("Enter number of rows:");
    scanf("%d", &rows);

    //iterate through rows
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        /*print stars */
        for(j=1; j<=(rows*2-(2*i-1)); j++)
        {
            printf("*");
        }
        /*Move to next line */
        printf("\n");
    }
    return 0;
}
