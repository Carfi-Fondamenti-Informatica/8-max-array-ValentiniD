//
// Created by gasta on 03/05/2022.
//

#include "lib.h"

float max_array (float array[], int dimensione) {
    float valore_massimo=0;
    for (int i=0; i<dimensione; i++) {
        if (valore_massimo<array[i]) {
            valore_massimo=array[i];
        }
    }
    return valore_massimo;
}
