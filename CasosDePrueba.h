/*

Caso de prueba principal:

#include "automovil.h"
#include <iostream>

int main() {
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

Resultado:
Este caso de prueba simula una serie de acciones en el automóvil. En primer lugar, se muestra el estado inicial del tablero. Luego, se realizan las siguientes acciones en secuencia:

Se enciende el automóvil.
Se acelera el automóvil.
Se frena el automóvil.
Se encienden las luces del automóvil.
Se apagan las luces del automóvil.
Se infla la llanta 0 a una presión de 35.0 PSI.
Se desinfla la llanta 2 a una presión de 25.0 PSI.
Se apaga el automóvil.
Cada acción se realiza llamando a los métodos correspondientes en la instancia de Automovil. Este caso de prueba te permitirá verificar el comportamiento de la aplicación y asegurarte de que las funcionalidades se ejecuten correctamente.

Casos de prueba alternativos identificados:

Caso de prueba: Intentar acelerar con el automóvil apagado.

Acciones:
Apagar el automóvil.
Intentar acelerar.
Resultado esperado:
Se muestra un mensaje de error indicando que el automóvil debe estar encendido para acelerar.
Caso de prueba: Intentar frenar cuando la velocidad es 0 km/h.

Acciones:
Encender el automóvil.
Frenar.
Resultado esperado:
Se muestra un mensaje de error indicando que el automóvil ya está detenido.
Caso de prueba: Intentar inflar una llanta con un valor de presión inválido.

Acciones:
Encender el automóvil.
Inflar la llanta 0 con un valor de presión negativo.
Resultado esperado:
Se muestra un mensaje de error indicando que el valor de presión es inválido.
Caso de prueba: Intentar desinflar una llanta con un índice de llanta inválido.

Acciones:
Encender el automóvil.
Desinflar la llanta 5 con un valor de presión válido.
Resultado esperado:
Se muestra un mensaje de error indicando que el índice de llanta es inválido.
Caso de prueba: Intentar desinflar una llanta con un valor de presión inválido.

Acciones:
Encender el automóvil.
Desinflar la llanta 1 con un valor de presión negativo.
Resultado esperado:
Se muestra un mensaje de error indicando que el valor de presión es inválido.
Caso de prueba: Intentar encender el automóvil cuando ya está encendido.

Acciones:
Encender el automóvil.
Intentar encender el automóvil nuevamente.
Resultado esperado:
Se muestra un mensaje de error indicando que el automóvil ya está encendido.
Estos escenarios de prueba adicionales cubren diferentes situaciones y ayudarán a verificar el comportamiento y la validez de las restricciones en la aplicación


*/