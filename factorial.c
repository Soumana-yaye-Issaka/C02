#include <stdio.h> // Déclaration de biblothèque standart

int main(void) {
    int nombre; //Déclaration de la variable nombre qui serait à stocker la valeur saisie par l'utilisateur 
    int factoriel = 1;  // Déclaration de la factoriel et il reçoi la valeur 1 par défaut 

    scanf("%d", &nombre); // lire la valeur saisie par l'utilusateur 
            //Utilisation de la boucle pour, pour calculer le factoriel
        for (i = 1; i <= nombre; i++) {
            factoriel *= i;
        }
        // Affichage du résultat
        printf("Le factoriel de %d est : %d.\n", nombre, factoriel);

    return 0; // fin du programme 
}
