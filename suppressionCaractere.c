#include<stdio.h>

int main()
{
    char ch[100], c;
    char nouvelleChaine[100];
    int j = 0;
    printf("ch = ");
    scanf("%s", ch);
    printf("c = ");
    scanf(" %c", &c);
    
    for(int i = 0; ch[i] != '\0'; i++) {
        if(ch[i] != c) {
            nouvelleChaine[j] = ch[i];
            j++;         
        }
    }
    
    printf("Nouvelle = %s", nouvelleChaine);
    
    return 0;
}