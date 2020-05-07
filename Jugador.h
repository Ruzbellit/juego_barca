 /*
  Archivo: Jugador.h
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-05
  Versión: 0.1
  Licencia: GPL
*/


#ifndef HH_JUGADOR
#define HH_JUGADOR

#include <iostream>
#include <vector>
#include <string>
#include "Individuo.h"
#include "Orilla.h"
#include "Barca.h"
#include "Lugar.h"


using namespace std;

class Jugador
{
  protected:
    vector<Individuo*> individuos;
    Orilla* orillaIzquierda;
    Orilla* orillaDerecha;
    Barca* barca;

  public:

    /**
     * @brief Constructor. Da valores iniciales a los atributos internos
     * @param losIndividuos (los individuos creados para el juego)
     */
    Jugador(vector<Individuo*> losIndividuos);

    /**
     * @brief Destructor. TODO: elimina punteros
     */
    virtual ~Jugador();

    /**
     * @brief imprime en pantalla el estado del juego para cada movimiento
     * TODO: falta terminarlo
     */
    virtual void mostrarEstadoJuego();

    /**
     * @brief TODO: falta hacerlo bien 
     */
    virtual void jugar();

    /**
     * @brief mueve el individuo al lado mas cercano
     * TODO: falta hacer que si no esta la barca el individuo 
     * tambien se mueva pero se ahogue
     * @param individuo (el individuo que se desea mover)
     */
    virtual void moverIndividuo(Individuo* individuo);

    /**
     * @brief ejecuta movimientos con teclas
     * TODO: falta terminarlo
     */
    virtual void leerTeclado();

    /**
     * @brief muestra en pantalla las instrucciones 
     */
    virtual void imprimirOpciones();

     /**
     * TODO: falta hacer esta funcion
     */
    virtual void ejecutarAccion();

    /**
     * TODO: falta hacer esta funcion
     */
    virtual void terminarJuego();

    // virtual string extraerNombreIndividuo(Lugar* lugar, int posicionIndividuo);

};
#else
class Jugador; 
#endif
