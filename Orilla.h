/*
  Archivo: Orilla.h
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-05
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

    /**
     * @brief Constructor. Da valores iniciales a los atributos internos
     * @param elNombre (nombre del lugar)
     * @param elVecino (lugar vecino)
     */
    Orilla(string elNombre, Lugar* elVecino);

     /**
     * @brief Destructor. TODO: elimina punteros
     */
    virtual ~Orilla();


};
#else
class Orilla; 
#endif