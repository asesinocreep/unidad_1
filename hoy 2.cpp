// 2)listas doblemente enlazadas

#include <iostream>
using namespace std;

struct NodoDoble {
    int dato;
    NodoDoble *sig, *ant;
};

void insertarDoble(NodoDoble*& cabeza, int valor) {
    NodoDoble* nuevo = new NodoDoble();
    nuevo->dato = valor;

    // El nuevo apunta hacia adelante (al que era el primero)
    nuevo->sig = cabeza;
    // El nuevo apunta hacia atrás a NULL (porque es el nuevo primero)
    nuevo->ant = NULL;

    // 3. CONEXIÓN REVERSA: El viejo primero ahora debe apuntar atrás al nuevo
    if (cabeza != NULL) {
        cabeza->ant = nuevo;
    }

    cabeza = nuevo;
    
    // DIFERENCIA: Se manejan 2 punteros por nodo para poder ir y volver.
}

int main() {
    NodoDoble* lista = NULL;
    insertarDoble(lista, 20);
    cout << "Insertado en Lista Doble" << endl;
    return 0;
}