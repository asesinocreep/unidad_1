#include <iostream>
using namespace std;

void obtenerMinMax(int *arr, int size, int *min, int *max) {
    int *ptr = arr;
    int *fin = arr + size;

    *min = *ptr;
    *max = *ptr;

    while(ptr < fin) {
        if(*ptr < *min) {
            *min = *ptr;
        }

        if(*ptr > *max) {
            *max = *ptr;
        }

        ptr++;
    }
}

int main() {
    int arr[5] = {8, 3, 15, 6, 2};
    int minimo, maximo;

    obtenerMinMax(arr, 5, &minimo, &maximo);

    cout << "Minimo: " << minimo << endl;
    cout << "Maximo: " << maximo << endl;

    return 0;
}