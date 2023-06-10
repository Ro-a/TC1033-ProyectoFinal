/*
Rodrigo Niembro Aguilar a01378695
*/

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

const int NUM_INDICADORES = 4;
const int NUM_LLANTAS = 4;

class Indicador {
private:
    bool estado;

public:
    Indicador();
    void prender();
    void apagar();
};

class Velocidad {
private:
    int valorActual;

public:
    Velocidad();
    void aumentar();
    void disminuir();
};

class Gasolina {
private:
    float nivelActual;
    const float capacidadMaxima;

public:
    Gasolina();
    void disminuir(float cantidad);
    void llenar(float cantidad);
};

class Llanta {
private:
    float presion;

public:
    Llanta();
    void setPresion(float nuevaPresion);
    float getPresion();
};

class Luces {
private:
    bool estado;

public:
    Luces();
    void prender();
    void apagar();
};

class Tablero {
private:
    Indicador indicadores[NUM_INDICADORES];
    Velocidad velocidadActual;
    Gasolina nivelGasolina;
    Luces luces;
    Llanta llantas[NUM_LLANTAS];

public:
    Tablero();
    void mostrarTablero();
    void actualizarIndicadores();
    void mostrarPresionLlantas();
    void verificarPresionLlantas();
};

class Automovil {
private:
    bool estado;
    int velocidad;
    float gasolina;
    bool luces;
    Tablero tablero;

public:
    Automovil();
    void prender();
    void apagar();
    void acelerar();
    void frenar();
    void prenderLuces();
    void apagarLuces();
    void mostrarTablero();
    void inflarLlanta(int indiceLlanta, float presion);
    void desinflarLlanta(int indiceLlanta, float presion);
};

#endif // AUTOMOVIL_H
