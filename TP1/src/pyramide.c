#include <stdio.h>

int hauteur;
int j,i;

int main() {
    printf("Choisissez la hauteur de la pyramide (entier positif) : ");
    scanf("%d", &hauteur);
    
    for(j=1; j<=hauteur; j++) {
        for(i=1; i<=hauteur-j; i++) {
            printf(" ");
        }
        
        for(i=1; i<=j; i++) {
            printf("%d", i);
        }
        
        
        for(i=j-1; i>=1; i--) {
            printf("%d", i);
        }
        
        printf("\n");
    }
    
    printf("Génération de la pyramide terminée !\n");
    return 0;
}
