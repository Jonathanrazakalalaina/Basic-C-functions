#include<stdio.h>

typedef struct {
    int valeur;
    struct noeud *suivant;
} noeud;

noeud* ajouter(noeud *tete, int v) {
    noeud *nouveau = (noeud*) malloc(sizeof(noeud));
    nouveau -> valeur = v;
    nouveau -> suivant = tete;

    tete = nouveau;
    printf("%d\n",tete->valeur);
    return tete;
}

void add(int* a) {
    *a = *a+1;
}

int main()
{
    noeud* liste;
    int n;
    //printf("Ajouter un élément : ");
    //scanf("%d", &n);

    printf("%d\n",liste);
    liste = ajouter(liste, 7);
    printf("%d\n",liste);
    printf("%d\n", liste->valeur);

    n=5;
    add(&n);
    printf("%d",n);
    return 0;
}