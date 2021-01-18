//Déclarartion des prototypes de fonctions
//========================================

//Définition des fonctions
//========================================

int** reserverMat(int **tab, int n, int m) {
    int i,j;

    //Réserver espace ligne
    tab = malloc(n*sizeof(int *));

    if( tab == NULL )  {
        fprintf(stderr,"Allocation impossible");
        exit(EXIT_FAILURE);
    }

    //Réserver espace colonne
	for (i=0; i<n ; i++) {
        *(tab+i) = malloc(m*sizeof(int));
	}
	return tab;
}

void remplirMat(int** matrice, int n, int m) {

    int i, j;

    for (i=0; i<n ; i++) {
        for (j=0; j<m; j++) {
         	printf("\n\tEntrer element : ");
            scanf("%d",*(matrice+i)+j);  //&matrice[i][j]
        }
	}
} //Fin de la fonction

void afficherMat(int **matrice, int n, int m) {
	int i,j;

	printf("\tMATRICE :\n ");

	for (i=0; i<n ; i++) 	{
        for (j=0; j<m; j++) {
            printf("\t\t%d\t", *(*(matrice+i)+j));
        }
        printf("\n");
    } //Fin de la fonction
}

void afficherTab(int *tab, int n) {
	int i;

	printf("\tTAVLEAU :\n ");

	for (i=0; i<n ; i++) 	{
           printf("\t\t%d\t", tab[i]);
    }
} //Fin de la fonction
