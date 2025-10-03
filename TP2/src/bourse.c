#include <stdio.h>

int main(void) {
    int prix[15] = {1503, 1695, 1742, 1566, 2129, 2230, 1591, 1668, 2282, 1689, 2174, 2173, 2290, 1883, 1974};
    int n = 15;

    int max_perte = 0;
    int max_avant = prix[0];
    int idx_max_avant = 0; // indice du meilleur achat courant
    int t1 = 0;
    int t2 = 0;

    int i = 1;
    while (i < n) {
        int perte = max_avant - prix[i];
        // Affichage de chaque tentative achat/vente
        printf("Etape %d: achat T1=%d val=%d, vente T2=%d val=%d, perte=%d\n",
               i, idx_max_avant, max_avant, i, prix[i], perte);

        if (perte > max_perte) {
            max_perte = perte;
            t1 = idx_max_avant;
            t2 = i;
            printf("=> Nouvelle plus grande perte: %d (T1=%d -> %d, T2=%d -> %d)\n",
                   max_perte, t1, prix[t1], t2, prix[t2]);
        }

        if (prix[i] > max_avant) {
            max_avant = prix[i];
            idx_max_avant = i;
            printf("-> Nouveau prix max pour achat: T1=%d val=%d\n", idx_max_avant, max_avant);
        }
        i = i + 1;
    }

    printf("Plus grande perte: %d\n", max_perte);
    if (max_perte > 0) {
        printf("Acheter (T1=%d) à %d, Vendre (T2=%d) à %d\n", t1, prix[t1], t2, prix[t2]);
    }

    return 0;
}
