#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);