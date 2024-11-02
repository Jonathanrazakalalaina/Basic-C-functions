#include<stdio.h>

int main()
{
    int i=1, max=0, n=0;
    do {
        printf("Entrer la valeur %d: ", i);
        scanf("%d", &n);
        if(n>max){
            max=n;
        }
        i++; 
    } while(i<=4);
    
    printf("Max = %d", max);
    
    return 0;
}