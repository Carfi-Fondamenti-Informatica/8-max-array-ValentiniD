#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int dimensione=0;
    cin >> dimensione;
    float array[dimensione];
    for (int i=0;i<dimensione;i++) {
        cin >> array[i];
    }
    float risultato=max_array(array,dimensione);
    cout << risultato;

    return 0;
}
