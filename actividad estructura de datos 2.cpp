#include<iostream>
#include<conio.h>

using namespace std;


 
struct info_direccion {

string direccion;
string ciudad;
string provincia;
};



struct empleado {
string nombre;
struct info_direccion dir_empleado;
float salario;

}empleado1;

int main() {

    empleado1.nombre = "Juan Perez";
    empleado1.dir_empleado.ciudad = "el tigre";
    empleado1.salario = 85,5;
    

    cout << "Nombre: " << empleado1.nombre << "\n";
    cout << "ciudad: " << empleado1.dir_empleado.ciudad << "\n";
    cout << "salario: " << empleado1.salario << "\n";

    return 0;
}

	
	

