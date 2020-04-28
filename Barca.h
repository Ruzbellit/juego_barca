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


#ifndef HH_BARCA
#define HH_BARCA

#include "Lugar.h"

class Barca: public Lugar
{
  protected:
    Lugar* orillaIzquierda;
    Lugar* orillaDerecha;

  public:
    Barca(string elNombre, Lugar* laOrillaIzquierda, Lugar* laOrillaDerecha);

    virtual ~Barca();

    virtual void agregarIndividuo(Individuo* elIndividuo);

    virtual bool desplazarse();

    // TODO: elimintar este método, es de pruebas
    virtual string mostrarVecino();


};
#else
class Barca; 
#endif
