#include <stdio.h>
main()
{
 /* D�clarations */
 int A[3][3];  /* matrice initiale */
 int B[3][3];  /* matrice r�sultat */
 int N, M;       /* dimensions des matrices */
 int I, J;       /* indices courants */

 /* Saisie des donn�es */
 printf("Nombre de lignes   (max.50) : ");
 scanf("%d", &N );

 printf("Nombre de colonnes (max.50) : ");
 scanf("%d", &M );

 for (I=0; I<N; I++)
    for (J=0; J<M; J++)
        {
         printf("El�ment[%d][%d] : ",I,J);
         scanf("%d", &A[I][J]);
        }

 /* Affichage de la matrice */
 printf("Matrice donn�e :\n");
 for (I=0; I<N; I++)
    {
     for (J=0; J<M; J++)
          printf("%7d", A[I][J]);
     printf("\n");
    }

 /* Affectation de la matrice transpos�e � B */
 for (I=0; I<N; I++)
     for (J=0; J<M; J++)
          B[J][I]=A[I][J];
  /* Edition du r�sultat */
 /* Attention: maintenant le r�le de N et M est invers�. */
  printf("Matrice r�sultat :\n");
 for (I=0; I<M; I++)
    {
     for (J=0; J<N; J++)
          printf("%7d", B[I][J]);
     printf("\n");
    }
 return 0;
}
