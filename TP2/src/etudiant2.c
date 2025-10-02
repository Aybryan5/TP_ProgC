#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main(void) {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5f; etudiants[0].note2 = 12.1f;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0f; etudiants[1].note2 = 14.1f;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Luc");
    strcpy(etudiants[2].adresse, "10, Rue Victor Hugo, Paris");
    etudiants[2].note1 = 12.5f; etudiants[2].note2 = 11.0f;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "Sophie");
    strcpy(etudiants[3].adresse, "5, Avenue de la République, Lille");
    etudiants[3].note1 = 10.0f; etudiants[3].note2 = 13.5f;

    strcpy(etudiants[4].nom, "Robert");
    strcpy(etudiants[4].prenom, "Julie");
    strcpy(etudiants[4].adresse, "3, Place Bellecour, Lyon");
    etudiants[4].note1 = 18.0f; etudiants[4].note2 = 17.0f;

    int i = 0;
    while (i < 5) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].note1);
        printf("Note 2 : %.1f\n\n", etudiants[i].note2);
        i = i + 1;
    }

    return 0;
}
