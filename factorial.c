#include <stdio.h>  //Déclaration de biblothèque standart Pour printf() et scanf()

int main() {  // Début du programme
    int Nb;  // Variable pour stocker l'entier saisi
    
    scanf("%d", &Nb);  // Lecture du nombre

    if (Nb < 0) {  // Vérification si le nombre est négatif
        printf("Le factoriel n'est pas défini pour les nombres négatifs.\n");
        return 1;  // Quitte le programme avec un code d'erreur (1)
    }

    long factoriel = 1;  // Initialisation du résultat (type long pour les grands nombres)
    
    for (int i = 1; i <= Nb; i++) {  // Boucle de 1 à Nb
        factoriel *= i;  // Calcul itératif du factoriel (1 × 2 × 3 × ... × Nb)
    }

    printf("Le factoriel de %d est : %ld\n", Nb, factoriel);  // Affichage
    return 0;  // Fin du programme
}

