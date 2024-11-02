#include<stdio.h>

typedef struct Liste Liste;
struct Liste
{
    int valeur;
    Liste *suivant;
};

Liste *ajouterTete(Liste *tete, int valeur)
{
    Liste *nouvelleListe = malloc(sizeof(*nouvelleListe));
    nouvelleListe->valeur = valeur;
    nouvelleListe->suivant = tete;
    
    tete = nouvelleListe;
    return tete;
}


Liste *supprimer(Liste *tete, int position) {
    if (tete == NULL) {
        return NULL; // Rien à faire si la liste est vide
    }

    if (position == 0) {
        // Cas spécial : suppression de la tête de la liste
        Liste *temp = tete;
        tete = tete->suivant;
        free(temp);
        return tete; // Retourne la nouvelle tête de la liste
    }

    // Parcourir la liste jusqu'à la position précédente
    Liste *precedent = tete;
    Liste *courant = tete->suivant;
    int i = 1;
    
    while (courant != NULL && i < position) {
        precedent = courant;
        courant = courant->suivant;
        i++;
    }

    if (courant == NULL) {
        // La position demandée est hors de la liste
        return tete;
    }

    // Supprimer l'élément à la position donnée
    precedent->suivant = courant->suivant;
    free(courant);

    return tete; // Retourne la tête de la liste inchangée
}


void afficherListe(Liste *tete)
{
    Liste *actuel = tete;
    while(actuel != NULL)
    {
        printf("%d -> ", actuel->valeur);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}

int main()
{
    Liste *tete = NULL;
    
    tete = ajouterTete(tete, 3);
    tete = ajouterTete(tete, 13);
    tete = ajouterTete(tete, 21);
    tete = ajouterTete(tete, 6);
    tete = ajouterTete(tete, 91);
    tete = ajouterTete(tete, 40);
    
    tete = supprimer(tete, 5);
    
    afficherListe(tete);
    
    return 0;
}