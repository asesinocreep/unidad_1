#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;  // guardar valor de a
    *a = *b;        // poner valor de b en a
    *b = temp;      // poner valor guardado en b
}

int main() {
    int x = 50, y = 10;

    cout << "Antes: x=" << x << ", y=" << y << endl;

    // Llamada a la función
    swap(&x, &y);

    cout << "Después: x=" << x << ", y=" << y << endl;

    return 0;
}