//library function
# include<stdio.h>

//main function
int main()
{
    //Declare variable and data-type
    int i,j,N;

    //input number of rows from user
    printf("Enter the number of rows:");
    scanf("%d", &N);

    //iterate through rows
    for(i=1; i<=N; i++)
    {
        //iterate over columns
        for(j=1; j<=N; j++)
        {
            //print star
            printf("*");
        }
        //print space between stars
        printf("\n");
    }
    //exit the function
    return 0;
}
