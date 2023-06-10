/*
Autor: Rodrigo Niembro Aguilar
*/

#include "automovil.h"
#include <iostream>

Indicador::Indicador() {
    estado = false;
}

void Indicador::prender() {
    estado = true;
}

void Indicador::apagar() {
    estado = false;
}

Velocidad::Velocidad() {
    valorActual = 0;
}

void Velocidad::aumentar() {
    if (valorActual < 230)
        valorActual += 15;
}

void Velocidad::disminuir() {
    if (valorActual > 0)
        valorActual -= 25;
}

Gasolina::Gasolina() : capacidadMaxima(42.0) {
    nivelActual = capacidadMaxima;
}

void Gasolina::disminuir(float cantidad) {
    if (cantidad <= nivelActual && cantidad >= 0)
        nivelActual -= cantidad;
}

void Gasolina::llenar(float cantidad) {
    if (cantidad >= 0 && (nivelActual + cantidad) <= capacidadMaxima)
        nivelActual += cantidad;
    else
        std::cout << "Error: Cantidad de gasolina inválida" << std::endl;
}

Llanta::Llanta() {
    presion = 33.0;
}

void Llanta::setPresion(float nuevaPresion) {
    presion = nuevaPresion;
}

float Llanta::getPresion() {
    return presion;
}

Luces::Luces() {
    estado = false;
}

void Luces::prender() {
    estado = true;
}

void Luces::apagar() {
    estado = false;
}

Tablero::Tablero() {
    for (int i = 0; i < NUM_INDICADORES; i++) {
        indicadores[i] = Indicador();
    }
    velocidadActual = Velocidad();
    nivelGasolina = Gasolina();
    luces = Luces();
    for (int i = 0; i < NUM_LLANTAS; i++) {
        llantas[i] = Llanta();
    }
}

void Tablero::mostrarTablero() {
    std::cout << "Estado del automóvil:" << std::endl;
    std::cout << "Velocidad: " << velocidadActual.valorActual << " km/h" << std::endl;
    std::cout << "Nivel de gasolina: " << nivelGasolina.nivelActual << " litros" << std::endl;
    std::cout << "Luces: " << (luces.estado ? "Prendidas" : "Apagadas") << std::endl;
    mostrarPresionLlantas();
}

void Tablero::actualizarIndicadores() {
    // Lógica para actualizar los indicadores en función del estado del automóvil
    if (velocidadActual.valorActual > 160) {
        indicadores[0].prender(); // Indicador de peligro
    } else {
        indicadores[0].apagar();
    }

    if (nivelGasolina.nivelActual < 0.15 * nivelGasolina.capacidadMaxima) {
        indicadores[1].prender(); // Indicador de recordatorio para llenar el tanque
    } else {
        indicadores[1].apagar();
    }

    verificarPresionLlantas();
}

void Tablero::mostrarPresionLlantas() {
    std::cout << "Presión de las llantas:" << std::endl;
    for (int i = 0; i < NUM_LLANTAS; i++) {
        std::cout << "Llanta " << i + 1 << ": " << llantas[i].getPresion() << " psi";
        if (llantas[i].getPresion() < 0.8 * 33.0 || llantas[i].getPresion() > 1.2 * 33.0) {
            std::cout << " - ¡Estado de peligro!";
        }
        std::cout << std::endl;
    }
}

void Tablero::verificarPresionLlantas() {
    for (int i = 0; i < NUM_LLANTAS; i++) {
        if (llantas[i].getPresion() < 0.8 * 33.0 || llantas[i].getPresion() > 1.2 * 33.0) {
            indicadores[2].prender(); // Indicador de peligro en las llantas
            return; // Si una llanta está en peligro, no es necesario verificar el resto
        }
    }
    indicadores[2].apagar();
}

Automovil::Automovil() {
    estado = false;
    velocidad = 0;
    gasolina = 42.0;
    luces = false;
    tablero = Tablero();
}

void Automovil::prender() {
    if (!estado) {
        estado = true;
        tablero.actualizarIndicadores();
        tablero.mostrarTablero();
    } else {
        std::cout << "El automóvil ya está prendido." << std::endl;
    }
}

void Automovil::apagar() {
    if (estado) {
        estado = false;
        tablero.actualizarIndicadores();
        tablero.mostrarTablero();
    } else {
        std::cout << "El automóvil ya está apagado." << std::endl;
    }
}

void Automovil::acelerar() {
    if (gasolina > 0) {
        velocidad += 15;
        gasolina -= 0.005 * velocidad;
        if (velocidad > 230) {
            velocidad = 230;
        }
        tablero.actualizarIndicadores();
        tablero.mostrarTablero();
    } else {
        std::cout << "El automóvil no puede acelerar. ¡Sin gasolina!" << std::endl;
    }
}

void Automovil::frenar() {
    velocidad -= 25;
    if (velocidad < 0) {
        velocidad = 0;
    }
    tablero.actualizarIndicadores();
    tablero.mostrarTablero();
}

void Automovil::prenderLuces() {
    luces = true;
    tablero.actualizarIndicadores();
    tablero.mostrarTablero();
}

void Automovil::apagarLuces() {
    luces = false;
    tablero.actualizarIndicadores();
    tablero.mostrarTablero();
}

void Automovil::mostrarTablero() {
    tablero.mostrarTablero();
}

void Automovil::inflarLlanta(int indiceLlanta, float presion) {
    if (indiceLlanta >= 0 && indiceLlanta < NUM_LLANTAS) {
        llantas[indiceLlanta].setPresion(presion);
        tablero.actualizarIndicadores();
        tablero.mostrarTablero();
    } else {
        std::cout << "Error: Índice de llanta inválido." << std::endl;
    }
}

void Automovil::desinflarLlanta(int indiceLlanta, float presion) {
    if (indiceLlanta >= 0 && indiceLlanta < NUM_LLANTAS) {
        llantas[indiceLlanta].setPresion(presion);
        tablero.actualizarIndicadores();
        tablero.mostrarTablero();
    } else {
        std::cout << "Error: Índice de llanta inválido." << std::endl;
    }
}