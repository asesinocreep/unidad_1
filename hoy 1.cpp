//1)lista simplemente enlazada

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* sig;
};

void insertarSimple(Nodo*& cabeza, int valor) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;
    
    // conexion: El nuevo nodo apunta a lo que antes era el inicio
    nuevo->sig = cabeza;

    // actualixar: La cabeza ahora es el nuevo nodo
    cabeza = nuevo;
    
    // diferencia: Solo movimos 1 puntero (sig). El último siempre apunta a NULL
}

int main() {
    Nodo* lista = NULL;
    insertarSimple(lista, 10);
    cout << "Insertado en Lista Simple" << endl;
    return 0;
}