#include <stdio.h>

/* funzione che calcola il MCD fra due interi positivi */
int massimoComunDivisore(int x, int y) {
      // pre: x, y sono interi >=1
      int risultato;          // il risultato

      /* inizializza risultato al minimo fra x ed y */
      if(x<y)  risultato = x;
      else     risultato = y;

      /* fintanto che risultato non divide sia x che y decrementalo */
      while(x%risultato!=0 || y%risultato!=0)
            risultato--;

      /* restituisci risultato */
      return risultato;
}

/* applicazione per il calcolo del MCD di due interi letti da tastiera */
int main() {
      int numero1, numero2;                // interi da leggere
      printf("Utente, introduci due interi\n");
      scanf("%d%d", &numero1, &numero2);
      printf("I due interi hanno MCD %d\n", massimoComunDivisore(numero1,numero2));
      system("PAUSE");
}
