#include "lib.h"
#include <stdio.h>

void inizializzaGriglia(char griglia[DIM_GRIGLIA][DIM_GRIGLIA]) {
    int i, j;
    for (i = 0; i < DIM_GRIGLIA; i++) {
        for (j = 0; j < DIM_GRIGLIA; j++) {
            griglia[i][j] = 'A';  // 'A' sta per Acqua
        }
    }
}

int posizionaNave(char griglia[DIM_GRIGLIA][DIM_GRIGLIA], int x, int y, int dimensione, int direzione) {
    int i, j;
    if (direzione == VERTICALE) {
        if (y + dimensione > DIM_GRIGLIA) return 0;  // Controlla che la nave non esca dalla griglia
        for (i = 0; i < dimensione; i++) {
            if (griglia[y + i][x] != 'A') return 0;  // Controlla che la posizione sia disponibile
        }
        for (i = 0; i < dimensione; i++) {
            griglia[y + i][x] = 'N';  // 'N' sta per Nave
        }
    }
    else {  // ORIZZONTALE
        if (x + dimensione > DIM_GRIGLIA) return 0;
        for (i = 0; i < dimensione; i++) {
            if (griglia[y][x + i] != 'A') return 0;
        }
        for (i = 0; i < dimensione; i++) {
            griglia[y][x + i] = 'N';
        }
    }
    return 1;
}

void mostraGriglia(char griglia[DIM_GRIGLIA][DIM_GRIGLIA]) {
    int i, j;
    for (i = 0; i < DIM_GRIGLIA; i++) {
        for (j = 0; j < DIM_GRIGLIA; j++) {
            printf("%c ", griglia[i][j]);
        }
        printf("\n");
    }
}

char attacco(char griglia[DIM_GRIGLIA][DIM_GRIGLIA], int x, int y) {
    if (griglia[y][x] == 'N') {
        griglia[y][x] = 'X';  // Colpito
        return 'X';
    }
    else if (griglia[y][x] == 'A') {
        griglia[y][x] = 'M';  // Mancato
        return 'M';
    }
    return 'R';  // Già attaccato
}
