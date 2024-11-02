#include <stdio.h>

int main() {
    char phrase[100], c1, c2;
    int i = 0;
    printf("Entrez la phrase : ");
    scanf("%s", phrase);
    printf("Entrez le caractere a remplacer : ");
    scanf("%c", &c1);
    printf("Entrez le caractere de remplacement : ");
    scanf("%c", &c2);

    for(i = 0; phrase[i]!='\0'; i++) {
        if(phrase[i]==c1) {
            phrase[i]=c2;
        }
    }
    printf("%s", phrase);

    return 0;

}