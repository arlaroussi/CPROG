//Déclarartion des prototypes de fonctions
//========================================

void remplirMat(int**, int, int);
void afficherMat(int**, int, int);
void afficherTab(int*, int);

//Définition des fonctions
//========================================

void remplirMat(int **tab, int n, int m) {

    int i, j;

    printf("%d\n",n);
    printf("%d\n",m);

    for (i=0; i<n ; i++) {
        for (j=0; j<m; j++) {
         	printf("\n\tEntrer element : ");
            scanf("%d",&tab[i][j]);
        }
	}
} //Fin de la fonction

void afficherMat(int **tab, int n, int m) {
	int i,j;

	printf("\tMATRICE :\n ");

	for (i=0; i<n ; i++) 	{
        for (j=0; j<m; j++) {
            printf("\t\t%d\t", tab[i][j]);
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
