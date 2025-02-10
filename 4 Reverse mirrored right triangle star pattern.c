//library function
# include<stdio.h>

//main function
int main()

{
//data type and variable decalare
    int i, j, rows;

    //input rows from user
    printf("Enter number of rows:");
    scanf("%d",&rows);

    //iterate through rows
    //print leading spaces
    for(i=1;i<=rows;i++)
{
    {
        printf(" ");
    }
    //iterate through columns to print star
    for(j=i;j<=rows;j++)
    {
        printf("*");
    }
    //Move to next line
    printf("\n");
    }
return 0;
}
