//Définition des fonctions
//========================================


//====Fonction remplissage tableau
void remplirMat(int n, int m, int tab[n][m]) {

    int i, j;

    for (i=0; i<n ; i++) {
        for (j=0; j<m; j++) {
         	printf("\n\tEntrer element [%d][%d]: ",i,j);
            scanf("%d",&tab[i][j]);
        }
	}
} //Fin de la fonction

void afficherMat(int n, int m, int tab[n][m]) {
	int i,j;

	printf("\tMATRICE :\n ");

	for (i=0; i<n ; i++) 	{
        for (j=0; j<m; j++) {
            printf("\t\t%d\t", tab[i][j]);
        }
        printf("\n");
    } //Fin de la fonction
}

void afficherTab(int n, int tab[n]) {
	int i;

	printf("\n\n\tTABLEAU :\n ");

	for (i=0; i<n ; i++) 	{
           printf("\t\t%d\t", tab[i]);
    }

} //Fin de la fonction
