#include <stdio.h> // inserssion de la bibliothèque stantadart 

int main(void) {
    int num1, // Déclaration de la première variable 
    int num2, // Déclaration de la deuxième variable 
    int sum;  // Déclaration de la valiable somme 

    // Demander à l'utilisateur de saisir deux entiers
    printf("Entrez le premier entier : ");
    scanf("%d", &num1); // La lecture de première variable 

    printf("Entrez le deuxième entier : ");
    scanf("%d", &num2); // La lecture de deuxième variable 

    // Calculer la somme
    sum = num1 + num2;

    // Afficher le résultat
    printf("La somme est : %d\n", sum); // Affichage du resultat

    return 0; // Fin du programme  
}
