 /*
  Archivo: Individuo.h
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-11
  Versión: 0.1
  Licencia: GPL
*/

/*
 Clase: Individuo
 Atributos: nombre, identificador, puede conducir, individuos comestibles
 Funcionalidades: 
 - Puede agrega un individuo especifico al listado de individuos que se puede comer
 - Puede decir el nombre que tiene el individuo
 - Puede preguntar si puede comerse a cierto individuo
 - Puede decir el identificador que tiene el individuo
 - verifica si el individuo puede conducir la barca
 Relaciones: ninguno
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
    bool puedeConducir;
    vector<Individuo*> individuosComestibles;

  public:

    /**
     * @brief Constructor. Da valores iniciales a los atributos internos
     * @param nombreIndividuo (el nombre del individuo)
     * @param elIdentificador (letra indicadora del individuo)
     */
    Individuo(string nombreIndividuo, string elIdentificador, bool siPuedeCondicir);

    /**
     * @brief Destructor.
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

    /**
     * @brief verifica si el individuo puede conducir la barca
     * @return dice si puede o no conducir la barca
     */
    virtual bool decirSiPuedeConducir();

};
#else
class Individuo; 
#endif
