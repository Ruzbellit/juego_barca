 /*
  Archivo: Individuo.h
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-05
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
    string identificador;
    vector<Individuo*> individuosComestibles;

  public:

    /**
     * @brief Constructor. Da valores iniciales a los atributos internos
     * @param nombreIndividuo (el nombre del individuo)
     * @param elIdentificador (letra indicadora del individuo)
     */
    Individuo(string nombreIndividuo, string elIdentificador);

    /**
     * @brief Destructor. TODO: elimina punteros
     */
    virtual ~Individuo();

    /**
     * @brief agrega un individuo especifico al listado de individuos que se puede comer
     * @param individuoComestible (individuo que se puede comer)
     */
    virtual void seComeA(Individuo* individuoComestible);

    /**
     * @brief dice el nombre que tiene el individuo
     * @return nombre del individuo
     */
    virtual string decirNombre();

    /**
     * @brief pregunta si puede comerse a cierto individuo
     * @param individuo
     * @return dice si puede comerse al individuo o no 
     */
    virtual bool decirSiPuedeComerseA(Individuo* individuo);

    /**
     * @brief dice el identificador que tiene el individuo
     * @return identificador del individuo
     */
    virtual string cualEsIdentificador();

     

};
#else
class Individuo; 
#endif
