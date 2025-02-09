//library function
#include<stdio.h>
//main function
int main()

{
    //declare data-type with variable
    int i, j, rows;
    //input number of rows from user
    printf("Enter number of rows from user:");
    scanf("%d", &rows);
    //input number of rows from user
    for(i=1; i<=rows; i++)
    {
        //iterate through columns
        for(j=i;j<=rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
