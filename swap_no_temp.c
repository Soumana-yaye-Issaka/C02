#include <stdio.h>

int main(void) {
    int a, b; // Déclaration des variable a et b

    scanf("%d" "%d", &a, &b); // lire les valeurs entré par l'utilisateur

    // Inversion sans variable temporaire en utilisant des opérations arithmétiques
    a = a + b; // a devient la somme des deux valeurs
    b = a - b; //b devient la initiale de a 
    a = a - b; // a devient la valeur initiale de b 

    // Affichage des nombres inversés
    printf("Après inversion : a = %d, b =%d\n", a, b); 

    return 0; // Fin du programme
}
