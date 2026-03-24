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

void mostrarProducto(const producto& p) {
    cout << "ID: " << p.id << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Cantidad: " << p.cantidad << endl;
    cout << "Precio: " << p.precio << endl;
    cout << "\n";
}

int main() {
    int n;
    cout << "ingrese la cantidad de productos: ";
    cin >> n;

    producto inventario[10];
    producto* ptr = inventario;

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el ID del producto: ";
        cin >> ptr->id;
        cout << "Ingrese el nombre del producto: ";
        cin >> ptr->nombre;
        cout << "Ingrese la cantidad del producto: ";
        cin >> ptr->cantidad;
        cout << "Ingrese el precio del producto: ";
        cin >> ptr->precio;
        ptr++;
        cout << "\n";
    }

    sort(inventario, inventario + n, comparar);

    for (int i = 0; i < n; ++i) {
        mostrarProducto(inventario[i]);
    }

    return 0;
}