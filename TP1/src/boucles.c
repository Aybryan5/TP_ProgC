#include <stdio.h>

int compteur;
char choix;

int main() {
    printf("Voulez-vous une pyramide en for ou en while ? (f/w) : ");
    if (scanf(" %c", &choix) != 1) {
        printf("Erreur de lecture du choix.\n");
        return 1;
    }
    if (choix != 'f' && choix != 'w') {
        printf("Choix invalide. Veuillez entrer 'f' pour for ou 'w' pour while.\n");
        return 1;
    }
    printf("Entrez le compteur pour votre pyramide : ");
    if (scanf("%d", &compteur) != 1) {
        printf("Erreur de lecture du compteur.\n");
        return 1;
    }
    if (compteur > 10) {
        printf("Le compteur doit être inférieur ou égal à 10.\n");
        return 1;
    }
    if (choix == 'w') {
        int i = 1;
        while (i <= compteur) {
            int j = 1;
            while (j <= i) {
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
        return 0;
    }
    else if (choix == 'f') {
        for (int i = 1; i <= compteur; i++) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
}
