#include <stdio.h>

void main(argc int, ) {
    int T[10];
    int N, I, J, BUFF;

///////////////////////////////
     printf("Entrer la valeur de N : ");
     scanf("%d",&N)

  for (I=0; I<N; I++)

    printf("Entrer la valeur T[%d]", I);
    scanf("%d",&T[I]);

////////////////////////////////

printf("Tableau : \n");

 for (I=0; I<N; I++)
     printf("%d ", T[I]);

 printf("\n");

for (I=0, J=N-1 ; I<J ; I++,J--) {
     BUFF = T[I];
     T[I] = T[J];
     T[J] = BUFF;
  }

///////////////////////////////////
printf("Tableau : \n");

 for (I=0; I<N; I++)
     printf("%d ", T[I]);

///////////////////////////////////
return;
}

