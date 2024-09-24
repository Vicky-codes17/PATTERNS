#include<stdio.h>
void main()
{
     int i,j;
    //For Loop
    for(i = 1; i<= 5; i++)
    {
        //Inner For Loop
        for(j = 1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}