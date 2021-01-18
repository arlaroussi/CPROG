#include <stdio.h>
#include <stdlib.h>
#include "fonctions_matrice.h"

#define LIGNE 3
#define COLONNE  2

void main (int argc, char * argv[]) {

    int mat[LIGNE][COLONNE], somme[LIGNE];
    int i, j;

    for (i=0; i<LIGNE ; i++) {
          somme[i] = 0;
        }

    remplirMat(mat, LIGNE, COLONNE);

    for (i=0; i<LIGNE ; i++) {
        for (j=0; j<COLONNE ; j++) {
          somme[i] += mat[j][i];
        }
    }

    afficherMat(mat, 3, 2);
    afficherTab(somme, 3);
}

