#include <stdio.h>
#include <stdlib.h>
#include "fonctions_matrice.h"

void main (int argc, char * argv[]) {

    int ** mat, produit;
    int ligne, colonne,i, j;

    printf("\n\tEntrer le nombre de lignes : ");
    scanf("%d",&ligne);

    printf("\n\tEntrer le nombre de colonnes : ");
    scanf("%d",&colonne);

    //mat = reserverMat(mat,ligne, colonne);

    mat = malloc(ligne * sizeof(int *));

    if( mat == NULL )  {
        fprintf(stderr,"Allocation impossible");
        exit(EXIT_FAILURE);
    }

    //Réserver espace colonne
	for (i=0; i<ligne ; i++) {
        *(mat+i) = (int *) malloc(colonne * sizeof(int)); // mat[i] = malloc(m*sizeof(int));
	}

    remplirMat(mat, ligne, colonne);

    printf("\n\n");
    for (i=0; i<colonne ; i++) {
            produit = 1;
        for (j=0; j<ligne ; j++) {
          produit = produit * (*(*(mat+j)+i)); //produit *= mat[i][j]
        }
        printf("%d\t\t",produit);
    }

    afficherMat(mat, ligne, colonne);
}

