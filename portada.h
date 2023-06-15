/*
Pensamiento computacional orientado a objetos. Grupo 301

Evidencia 2. Solución Situación Problema.

Rodrigo Niembro Aguilar - A01378695 - ITD
14 de junio del 2023

Problema a resolver:
Se requiere construir un simulador del comportamiento de un Automóvil.
El automóvil debe ser capaz de ejecutar tareas básicas como prender, apagar, acelerar,
frenar, prender luces, apagar luces. La información del estado del auto se puede
representar en un tablero con indicadores de prendido/apagado, velocidad actual, nivel
del tanque de gasolina y luces prendidas/apagadas. Cuando se pide al auto que acelere la
velocidad aumenta en 15 km/h y la gasolina disminuye 0.005 litros mulJplicado por la
velocidad actual. Cuando se pide al auto que frene la velocidad disminuye en 25 km/h. La
máxima velocidad del auto es 230 km/h. Cuando la velocidad es mayor a 160 km/h se
muestra un indicador de peligro. Cuando la gasolina es menor a 15% aparece un
recordatorio para llenar el tanque. El tanque de gasolina tiene un valor constante de 42
litros.
Al iniciar el programa, se muestra el tablero y después de cada operación se vuelve a
dibujar. El auto inicia con el tanque lleno, apagado y con las luces apagadas.
Debes validar las entradas de usuario (por ejemplo, los litros a cargar no deben ser
negaJvos o sobrepasar la capacidad del tanque). También el estado del auto no puede
pasar de 230 km/h o disminuir por debajo de 0 km/h. Y, por supuesto, no puede
acelerar/moverse si no tiene gasolina.
Por ultimo, agrega al problema las llantas del auto: una clase Llanta y 
un arreglo de llantas en el lugar adecuado. El único atributo de las llantas es 
la presión en psi. Asigna un valor por default de 33, pero proporciona métodos
get/set para modificarla. Agrega al tablero un indicador de la presión de las llantas, 
tú decides la forma de representar el estado de las 4 llantas, tomando en cuenta
que, si están un 20% por arriba o por debajo de la presión normal, ignifica un estado 
de peligro. Agrega al menú principal la opción de inflar o desinflar llantas, el
programa te pregunta cuál de las 4 llantas y el nuevo valor de presión.

*/