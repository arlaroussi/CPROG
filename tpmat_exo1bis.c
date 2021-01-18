#include <stdio.h>
#include <stdlib.h>


void main (int argc, char * argv[]) {

    int ** mat;
    int n, m, i, j;

    printf("\n\tEntrer le nombre de lignes : ");
    scanf("%d",&n);

    printf("\n\tEntrer le nombre de colonnes : ");
    scanf("%d",&m);
    //Réserver espace ligne
    mat = malloc(n*sizeof(int *));

    if( mat == NULL )  {
        fprintf(stderr,"Allocation impossible");
        exit(EXIT_FAILURE);
    }

    //Réserver espace colonne
	for (i=0; i<n ; i++) {
        mat[i] = malloc(m*sizeof(int));
	}

    for (i=0; i<n ; i++) {
        for (j=0; j<m; j++) {
         	printf("\n\tEntrer element : ");
            scanf("%d",&mat[i][j]);
        }
	}
		printf("\n");

	printf("\tMATRICE :\n ");

	for (i=0; i<n ; i++) 	{
        for (j=0; j<m; j++) {
            printf("\t\t%d\t", mat[i][j]);
        }
        printf("\n");
    } //Fin de la fonction
}



