// lista circular simple

void insertarCircular(Nodo*& cola, int valor) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;

    if (cola == NULL) {
        // Si es el primero, se apunta a sí mismo para formar el círculo
        nuevo->sig = nuevo;
        cola = nuevo;
    } else {
        //  El nuevo apunta al primer elemento (cola->sig es el inicio)
        nuevo->sig = cola->sig;
        //  El último (cola) ahora apunta al nuevo que acabamos de meter
        cola->sig = nuevo;
    }
    
    // diferencia : No existe "NULL" Si caminas mucho, vuelves al principio
}