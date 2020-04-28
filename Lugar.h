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


#ifndef HH_LUGAR
#define HH_LUGAR

#include <vector>
#include <string>
#include "Individuo.h"

using namespace std;

class Lugar 
{
  protected:
    string nombre; 
    vector<Individuo*> individuosContenidos;
    Lugar* vecino;

  public:

    Lugar(string elNombre);

    virtual ~Lugar();

    virtual void agregarIndividuo(Individuo* elIndividuo);

    virtual void sacarIndividuo(Individuo* elIndividuo);

    virtual bool haPerdido();

    virtual string mostrarIndividuosContenidos();

    virtual void agregarVecino(Lugar* vecino); 

    virtual string decirNombre();

    // TODO: elimintar este método, es de pruebas
    virtual string mostrarVecino();
    virtual Lugar* obtenerVecino();
    virtual int cantidadIndividuos();
    virtual Individuo* sacarIndividuoEnPosicion(int posicion);



};
#else
class Lugar; 
#endif