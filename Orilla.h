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


#ifndef HH_ORILLA
#define HH_ORILLA

#include "Lugar.h"

using namespace std;

class Orilla : public Lugar
{
  protected:
  

  public:

    Orilla(string elNombre);

    virtual ~Orilla();

    virtual void agregarVecino(Lugar* vecino);


};
#else
class Orilla; 
#endif