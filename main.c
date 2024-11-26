#include <stdio.h>
#include "lib.h"

int main() {
    char griglia[DIM_GRIGLIA][DIM_GRIGLIA];
    inizializzaGriglia(griglia);

    // Esempio di posizionamento nave
    if (posizionaNave(griglia, 0, 0, 3, VERTICALE)) {
        printf("Nave posizionata con successo.\n");
    }
    else {
        printf("Errore nel posizionamento della nave.\n");
    }

    mostraGriglia(griglia);

    // Esempio di attacco
    char risultato = attacco(griglia, 0, 0);
    printf("Risultato dell'attacco: %c\n", risultato);

    mostraGriglia(griglia);

    return 0;
}
