  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>


int main () {
int palpite,numero;

  srand(time(NULL));
  numero = rand() % 100 + 1;

  do{
   printf ("Digite um valor: \n");
   scanf ("%d", &palpite);

     if (palpite > numero){
       printf ("O número é menor\n");
     }
    else if (palpite < numero) {
      printf ("O numero é maior\n");
    }
    else {
      printf ("Parabéns voce acertou\n");
    }
    }while (palpite != numero); 



 return 0;
     }