//library function
#include<stdio.h>
//main function
int main()
{
    //declare data-type and variable
    int i, j, N;

    //Print number of rows
    printf("Enter number of rows:");
    scanf("%d", &N);

    //iterate through N rows
    for(i=1; i<=N; i++)
    {
        //iterate through cloumns
        for(j=1; j<=N; j++)
        {
            //Print star for each columns
            printf("*");
        }
        //Move to the next line row
        printf("\n");
    }
    return 0;
}
