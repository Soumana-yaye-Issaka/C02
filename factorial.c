#include <stdio.h>

int main() {
    int nombre, i;
    long long factoriel = 1;  // Utilisation de long long pour éviter le dépassement de capacité

    // Demander à l'utilisateur de saisir un entier
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    // Vérifier que le nombre est positif
    if (nombre < 0) {
        printf("Le factoriel n'est pas défini pour les nombres négatifs.\n");
    } else {
        // Calcul du factoriel
        for (i = 1; i <= nombre; i++) {
            factoriel *= i;
        }
        // Affichage du résultat
        printf("Le factoriel de %d est %lld.\n", nombre, factoriel);
    }

    return 0;
}
