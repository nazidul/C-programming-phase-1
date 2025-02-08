//library function
#include<stdio.h>
//main function
int main()

{
    //data-type and variable declare
    int i, j, rows;
    //Input rows from user
    printf("Enter number of rows:");
    scanf("%d",&rows);
    //iterate through rows
    for(i=1;i<=rows;i++)
    {
        //print space in decreasing order of rows
        for(j=1;j<=rows;j++)
            {
                printf(" ");
            }
            //print star in increasing order of rows
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
    //move to next line
    printf("\n");
    }
    return 0;
}
