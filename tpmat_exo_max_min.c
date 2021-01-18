#include <stdio.h>
#include <stdlib.h>
#include "fonctions_matrice_v0.h"

#define LIGNE 5
#define COLONNE  5

void main (int argc, char * argv[]) {

    int mat[LIGNE][COLONNE], somme[LIGNE];
    int i, j, min, max;

    for (i=0; i<LIGNE ; i++) {
          somme[i] = 0;
    }

    remplirMat(LIGNE, COLONNE, mat);

    min = max = mat[0][0];

    for (i=0; i<LIGNE ; i++) {

        for (j=0; j<COLONNE ; j++) {

            if (i == 0 && j == 0) {
                    printf("\n\n\tCas initial\n");
            }
            else
                if (mat[i][j] < min)
                    min = mat[i][j];
                else
                if (mat[i][j] > max)
                    max = mat[i][j];
            }
        }
    printf("\n\n\t\tLe maximum de cette matrice est : %d\n", max);
    printf("\n\n\t\tLe minimum de cette matrice est : %d\n", min);
}
