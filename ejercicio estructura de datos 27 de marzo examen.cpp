#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct producto {
    int id;
    string nombre;
    int cantidad;
    float precio;
};

bool comparar(producto a, producto b) {
    return a.precio < b.precio;
}

int main() {
    producto inventario[10];
    int n = 0; 
    int opcion;

    do {
        cout << "\n1. Agregar\n2. Mostrar\n3. Eliminar\n4. Salir\nOpcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                if (n < 10) {
                    cout << "ID: "; cin >> inventario[n].id;
                    cout << "Nombre: "; cin >> inventario[n].nombre;
                    cout << "Cantidad: "; cin >> inventario[n].cantidad;
                    cout << "Precio: "; cin >> inventario[n].precio;
                    n++;
                }
                break;

            case 2:
                sort(inventario, inventario + n, comparar);
                for (int i = 0; i < n; i++) {
                    cout << "ID: " << inventario[i].id << " - " << inventario[i].nombre << " - $" << inventario[i].precio << endl;
                }
                break;

            case 3:
                int idBuscar;
                cout << "ID a eliminar: "; cin >> idBuscar;
                for (int i = 0; i < n; i++) {
                    if (inventario[i].id == idBuscar) {
                        for (int j = i; j < n - 1; j++) {
                            inventario[j] = inventario[j + 1];
                        }
                        n--;
                        cout << "Eliminado." << endl;
                        break;
                    }
                }
                break;
        }
    } while (opcion != 4);

    return 0;
}











