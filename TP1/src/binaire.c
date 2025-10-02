#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);
    
    printf("=== Affichage de nombres en format binaire ===\n\n");
    
    for (int j = 0; j < taille; j++) {
        int nombre = nombres[j];
        
        printf("Nombre décimal: %d\n", nombre);
        printf("Binaire:        ");
        
        if (nombre == 0) {
            printf("0b0");
        } else {
            if (nombre < 0) {
                printf("-");
                nombre = -nombre;
            }
            
            printf("0b");
            
            int bits = sizeof(int) * 8;
            int premier_bit_trouve = 0;
            
            for (int i = bits - 1; i >= 0; i--) {
                
                int bit = (nombre >> i) & 1;
                
                if (bit == 1) {
                    premier_bit_trouve = 1;
                }
                
                if (premier_bit_trouve) {
                    printf("%d", bit);
                }
            }
        }
        
        printf("\n");
        printf("--------------------\n");
    }
    
    printf("\nVoulez-vous tester d'autres nombres? (Entrez un nombre ou 0 pour quitter)\n");
    int nombre_utilisateur;
    
    while (1) {
        printf("Entrez un nombre: ");
        if (scanf("%d", &nombre_utilisateur) != 1) {
            printf("Entrée invalide. Au revoir!\n");
            break;
        }
        
        if (nombre_utilisateur == 0) {
            printf("Au revoir!\n");
            break;
        }
        
        printf("Décimal: %d -> Binaire: ", nombre_utilisateur);
        
        if (nombre_utilisateur == 0) {
            printf("0b0");
        } else {
            int nombre = nombre_utilisateur;
            
            if (nombre < 0) {
                printf("-");
                nombre = -nombre;
            }
            
            printf("0b");
            
            int bits = sizeof(int) * 8;
            int premier_bit_trouve = 0;
            
            for (int i = bits - 1; i >= 0; i--) {
                int bit = (nombre >> i) & 1;
                
                if (bit == 1) {
                    premier_bit_trouve = 1;
                }
                
                if (premier_bit_trouve) {
                    printf("%d", bit);
                }
            }
        }
        
        printf("\n");
    }
    
    return 0;
}