#include <stdio.h>
#include <stdlib.h>
#include "fonctions_matrice_v0.h"

#define LIGNE 3
#define COLONNE  3

void main (int argc, char * argv[]) {

    int mat[LIGNE][COLONNE];
    int i, j, somme;

    remplirMat(LIGNE, COLONNE, mat);

    somme = 0;

    for (i=0; i<LIGNE ; i++) {
        somme += mat[i][i];
   }

   afficherMat(LIGNE, COLONNE, mat);

    printf("\n\n\t\tLe maximum de cette matrice est : %d\n", somme);
}
