#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Demander à l'utilisateur de saisir deux entiers
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);
    
    printf("Entrez le deuxième entier : ");
    scanf("%d", &num2);

    // Calculer la somme
    sum = num1 + num2;

    // Afficher le résultat
    printf("La somme de %d et %d est %d.\n", num1, num2, sum);

    return 0;
}
