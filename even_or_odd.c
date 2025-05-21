#include <stdio.h> // Déclaration de bibliothèque standart

int main() {
    int nombre; //Déclaration de variable pour stoker le nombre qui serait verifier 

    // 
    scanf("%d", &nombre); // Lecture du nombre entier saisie par l'utilisateur 

    // Vérifier si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre); // Affiche que le nmbre est pair
    } else {
        printf("%d est un nombre impair.\n", nombre); // Affiche que le nmbre est impair
    }

    return 0; //  Fin du programme 
}
