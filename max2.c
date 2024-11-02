#include<stdio.h>

int maxi(a, b){
    int max=a;
    if(a<b){
        max = b;
    } else {
        max = a;
    }
    return max;
}

int main()
{
    int M=0, x, y, z, t;
    printf("Entrer x : ");
    scanf("%d", &x);
    printf("Entrer y : ");
    scanf("%d", &y);
    printf("Entrer z : ");
    scanf("%d", &z);
    printf("Entrer t : ");
    scanf("%d", &t);
    
    M = maxi(maxi(x,y), maxi(z,t));
    
    printf("Max = %d", M);
    return 0;
}