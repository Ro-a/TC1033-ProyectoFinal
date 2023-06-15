/*
Autor: Rodrigo Niembro Aguilar A01378695 ITD
*/

#include "automovil.h"
#include <iostream>

int main() {
    std::cout << "Autor: Rodrigo Niembro Aguilar, A01378695, (ITD)" << std::endl;

    Automovil automovil;

    automovil.mostrarTablero(); // Mostrar el tablero inicial

    std::cout << "Ejecutando acciones..." << std::endl;

    automovil.prender();
    automovil.acelerar();
    automovil.frenar();
    automovil.prenderLuces();
    automovil.apagarLuces();
    automovil.inflarLlanta(0, 35.0);
    automovil.desinflarLlanta(2, 25.0);
    automovil.apagar();

    return 0;
}
