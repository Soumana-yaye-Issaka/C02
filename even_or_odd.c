#include <stdio.h>  // Déclaration de la bibliothèque standards

int main() {  // Début du programme
    int nb;  // Variable pour stocker le nombre

    scanf("%d", &nb);  // Lecture du nombre
    
    if (nb % 2 == 0) {  // Si le reste de la division par 2 est 0
        printf("%d est pair.\n", nb);  // Alors il est pair
    }  
    else {  // Sinon
        printf("%d est impair.\n", nb);  // Il est impair
    }

    return 0;  // Fin du programme
}
