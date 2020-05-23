// Constant_calificador_clase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
class Demo
{
    public:
        int x = 10;
        int y = 20;
        void display() const // NO podemos modificar los miembros de una clase cuando el método en costante.
        {
            // x++; // ESTO NO SE PUEDE
            cout << x << " " << y << endl;
        }
};

void func(const int &x, int &y) // al tener una referencia constante no se puede modificar en la función. 
{
    cout << x << " " << y << endl; 
    //x++; // ESTO NO SE PUEDE
}
int main()
{
    Demo d;
    d.display();

    int i = 10, j = 20;
    func(i, j);
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
