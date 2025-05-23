#include <stdio.h>  // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {  // Début de la fonction principale
    int a, b;  // Déclaration de deux variables entières a et b

    scanf("%d %d", &a, &b);  // Lecture de deux entiers depuis l'entrée standard (clavier)
    
    // Échange des valeurs sans variable temporaire :
    a = a + b;  // Stocke la somme des deux variables dans a
    b = a - b;  // Soustrait b de la somme (donc récupère l'ancienne valeur de a)
    a = a - b;  // Soustrait le nouveau b de la somme (donc récupère l'ancienne valeur de b)
    
    printf("Après échange : a = %d, b = %d\n", a, b);  // Affichage des valeurs échangées
    return 0;  // Fin du programme avec succès (code 0)
}
