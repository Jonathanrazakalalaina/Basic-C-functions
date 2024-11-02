#include<stdio.h>

int main()
{
    
    char phrase[100];
    int i, nbMot = 1;
    printf("Entrez une phrase : ");
    
    fgets(phrase,sizeof(phrase), stdin);
    
    for(i=0; phrase[i] != '\0'; i++)
    {
        if(phrase[i] == ' ')
        {
            nbMot++;
        }
    }
    
    printf("Nombrede mots = %d", nbMot);
    
    return 0;
}