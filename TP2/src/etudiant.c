#include <stdio.h>

int main(void) {
    char noms[5][50] = {
        "Dupont", "Martin", "Bernard", "Petit", "Robert"
    };
    char prenoms[5][50] = {
        "Marie", "Pierre", "Luc", "Sophie", "Julie"
    };
    char adresses[5][100] = {
        "20, Boulevard Niels Bohr, Lyon",
        "22, Boulevard Niels Bohr, Lyon",
        "10, Rue Victor Hugo, Paris",
        "5, Avenue de la République, Lille",
        "3, Place Bellecour, Lyon"
    };
    float note_prog[5] = {16.5f, 14.0f, 12.5f, 10.0f, 18.0f};
    float note_sys[5]  = {12.1f, 14.1f, 11.0f, 13.5f, 17.0f};

    int i = 0;
    while (i < 5) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Prog C : %.1f\n", note_prog[i]);
        printf("Note Système : %.1f\n\n", note_sys[i]);
        i = i + 1;
    }

    return 0;
}
