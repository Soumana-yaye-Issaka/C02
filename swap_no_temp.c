#include <stdio.h>

int main() {
    int a, b;

    // Demander à l'utilisateur de saisir deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    // Inversion sans variable temporaire en utilisant des opérations arithmétiques
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage des nombres inversés
    printf("Après inversion :\n");
    printf("Premier nombre : %d\n", a);
    printf("Deuxième nombre : %d\n", b);

    return 0;
}
