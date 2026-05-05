//4) Lista Circular Doblemente Enlazada

#include <iostream>
using namespace std;

struct NodoCD {
    int dato;
    NodoCD *sig, *ant;
};

void insertarCircularDoble(NodoCD*& inicio, int valor) {
    NodoCD* nuevo = new NodoCD();
    nuevo->dato = valor;

    if (inicio == NULL) {
        nuevo->sig = nuevo->ant = nuevo;
        inicio = nuevo;
    } else {
        NodoCD* ultimo = inicio->ant; // El anterior al primero es el último

        //  El nuevo conecta adelante con inicio y atrás con el último
        nuevo->sig = inicio;
        nuevo->ant = ultimo;

        // El último apunta adelante al nuevo
        ultimo->sig = nuevo;
        //  El inicio apunta atrás al nuevo
        inicio->ant = nuevo;
        
        inicio = nuevo; // El nuevo es el nuevo frente
    }
    
    // diferencia: Se actualizan 4 conexiones para cerrar el anillo por ambos lados
}

int main() {
    NodoCD* listaCircDoble = NULL;
    insertarCircularDoble(listaCircDoble, 40);
    cout << "Insertado en Lista Circular Doble" << endl;
    return 0;
}