/*
  Archivo: Barca.h
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-05
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

    /**
     * @brief Constructor. Da valores iniciales a los atributos internos
     * @param elNombre (el nombre de la barca)
     * @param laOrillaIzquierda
     * @param laOrillaDerecha
     */  
    Barca(string elNombre, Lugar* laOrillaIzquierda, Lugar* laOrillaDerecha);

    /**
     * @brief Destructor. TODO: elimina punteros
     */
    virtual ~Barca();

    /**
     * @brief agrega un individuo a la barca
     * @param elIndividuo (el individuo a agregar)
     * @return dice si el individuo se pudo agregar o no
     */
    virtual bool agregarIndividuo(Individuo* elIndividuo);

    /**
     * @brief mueve la barca de una orilla a otra, verifica si tiene al menos un individuo
     * TODO: falta hacer que solo se desplace si esta el robot para manejarla
     */
    virtual void desplazarse();

};

#else
class Barca; 
#endif
