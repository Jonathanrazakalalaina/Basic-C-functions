#include<stdio.h>

int main()
{
    int a, i;
    for(a = 0; a < 6; a++)
    {
        for(i = 0; i < a+1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}