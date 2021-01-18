//Déclarartion des prototypes de fonctions
//========================================

//Définition des fonctions
//========================================

void remplirMat(int tab[n][m], int n, int m) {

    int i, j;

    for (i=0; i<n ; i++) {
        for (j=0; j<m; j++) {
         	printf("\n\tEntrer element : ");
            scanf("%d",&tab[i][j]);
        }
	}
} //Fin de la fonction

void afficherMat(int tab[n][m], int n, int m) {
	int i,j;

	printf("\tMATRICE :\n ");

	for (i=0; i<n ; i++) 	{
        for (j=0; j<m; j++) {
            printf("\t\t%d\t", tab[i][j]);
        }
        printf("\n");
    } //Fin de la fonction
}

void afficherTab(int tab[n], int n) {
	int i;

	printf("\tTAVLEAU :\n ");

	for (i=0; i<n ; i++) 	{
           printf("\t\t%d\t", tab[i]);
    }
} //Fin de la fonction
