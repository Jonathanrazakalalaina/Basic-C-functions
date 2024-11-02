#include<stdio.h>

int main()
{
    int a=0, b=0, mod=0, i=100;
    printf("Entrer a : ");
    scanf("%d", &a);
    printf("Entrer b : ");
    scanf("%d", &b);

    if(a<0 || b<0) {
        printf("Tsy mety !");
        return 1;
    }

    while(b != 0) {
        int temp = b;
        b=a%b;
        a=temp;
    }

    printf("Le pgcd est %d", a);

    return 0;
}