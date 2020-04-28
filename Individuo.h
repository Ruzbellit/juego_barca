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


#ifndef HH_INDIVIDUO
#define HH_INDIVIDUO

#include <string>
#include <vector>

using namespace std;

class Individuo
{
  protected:
    string nombre;
    vector<Individuo*> individuosComestibles;

  public:
    Individuo(string nombreIndividuo);

    virtual ~Individuo();

    virtual void seComeA(Individuo* individuoComestible);

    virtual string decirNombre();

    virtual bool decirSiPuedeComerseA(Individuo* individuo);

     

};
#else
class Individuo; 
#endif
