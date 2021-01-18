#include <stdio.h>
#include <stdlib.h>
#include "fonctions_matrice_v0.h"

#define LIGNE 2
#define COLONNE  3

void main (int argc, char * argv[]) {

    int mat[LIGNE][COLONNE], somme[COLONNE];
    int i, j;

    for (i=0; i<COLONNE ; i++) {
          somme[i] = 0;
        }

    remplirMat(LIGNE, COLONNE, mat);

    for (j=0; j<COLONNE ; j++) { //Boucle des lignes
        for (i=0; i<LIGNE ; i++) { //Boucle des colonnes
          somme[j] += mat[i][j];
        }
    }

    afficherMat(LIGNE, COLONNE, mat);
    afficherTab(COLONNE, somme);
}

