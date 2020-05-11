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
    bool alguienSeAhogo;

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
     * @brief valida si ha perdido o si ha ganado y si no es ninguna continua jugando
     */ 
    virtual void validarPerdioGano();

    /**
     * @brief inicializa el juego añadiendo todos los individuos a la izquierda, muestra las opciones...
     */
    virtual void jugar();

    /**
     * @brief avisa al usuario cuando un individuo se ha ahogado
     * @param nombreIndividuo 
     */
    virtual void seAhogoIndividuo(string nombreIndividuo);

    /**
     * @brief mueve el individuo al lado mas cercano
     * TODO: falta hacer que si no esta la barca el individuo 
     * tambien se mueva pero se ahogue
     * @param individuo (el individuo que se desea mover)
     */
    virtual void moverIndividuo(Individuo* individuo);

    /**
     * @brief ejecuta movimientos con teclas
     * TODO: falta arreglar cuando se ingresa mal la opcion
     */
    virtual void leerTeclado();

    /**
     * @brief muestra en pantalla las instrucciones 
     */
    virtual void imprimirOpciones();

     /**
     * TODO: falta documentar esta funcion
     */
    virtual void ejecutarAccion(string opcion);


};
#else
class Jugador; 
#endif
