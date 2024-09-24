#include<stdio.h>
void main()
{
    int rows,i,j;

    printf("Enter the number of rows :");
    scanf("%d",&rows);

    //For Loop
    for(i = 1; i<= rows; i++)
    {
        //Inner For Loop
        for(j = 1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}