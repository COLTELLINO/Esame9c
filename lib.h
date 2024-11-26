#ifndef LIB_H
#define LIB_H

#define DIM_GRIGLIA 10  // Dimensione della griglia di gioco, 10x10
#define VERTICALE 1
#define ORIZZONTALE 0

// Dichiarazione delle funzioni
void inizializzaGriglia(char griglia[DIM_GRIGLIA][DIM_GRIGLIA]);
int posizionaNave(char griglia[DIM_GRIGLIA][DIM_GRIGLIA], int x, int y, int dimensione, int direzione);
void mostraGriglia(char griglia[DIM_GRIGLIA][DIM_GRIGLIA]);
char attacco(char griglia[DIM_GRIGLIA][DIM_GRIGLIA], int x, int y);

#endif
