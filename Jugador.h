 /*
  Archivo: Vagon.h
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-04-02
  Versión: 0.1
  Licencia: GPL
*/


#ifndef HH_JUGADOR
#define HH_JUGADOR

#include <vector>
#include "Individuo.h"
#include "Orilla.h"
#include "Barca.h"

#include <iostream>
#include <string>
#include "Individuo.h"
#include "Lugar.h"
#include "Orilla.h"
#include "Barca.h"

using namespace std;

using namespace std;

class Jugador
{
  protected:
    vector<Individuo*> individuos;
    Orilla* orillaIzquierda;
    Orilla* orillaDerecha;
    Barca* barca;

  public:
    Jugador(vector<Individuo*> losIndividuos);

    virtual ~Jugador();

    // virtual void mostrarEstadoJuego();

    virtual void jugar();

    virtual void leerTeclado();

    virtual void imprimirOpciones();

    virtual void ejecutarAccion();

    virtual void terminarJuego();

    // virtual string imprimirPosicionBarca(string nombreVecino);

    // virtual string extraerNombreIndividuo(Lugar* lugar, int posicionIndividuo);

};
#else
class Jugador; 
#endif
