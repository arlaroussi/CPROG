#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../header/tableaux.h"


//Déclarartion des prototypes de fonctions
//========================================

//Fonction main() : Entrée de l'exécution du programme

int main(int argc, char *argv[]) {

int i, n, k;

system("cls");

printf("Entrer nombre de lignes : ");
scanf("%d",&n);

printf("Entrer nombre de colonnes : ");
scanf("%d",&k);

int** matrice = malloc(n*sizeof(int *));

for (i=0;i<n;i++)
matrice[i]= malloc(k*sizeof(int));


remplirMat(matrice, n, k); //Appel de la fonction saisie de la matrice

afficherMat(matrice,n,k); //Appel de la fonction affichage de la matrice

} //fin du main()

