/*
  Archivo: Lugar.h
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-11
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

    /**
     * @brief Constructor. Da valores iniciales a los atributos internos
     * @param elNombre (nombre del lugar)
     */
    Lugar(string elNombre);

    /**
     * @brief Destructor.
     */
    virtual ~Lugar();

    /**
     * @brief dice el nombre que se asigno al lugar
     * @return nombre del lugar
     */
    virtual string decirNombre();

    /**
     * @brief agrega un individuo al lugar 
     * @param elIndividuo (el individuo que queremos agregar)
     * @return fue agregado(true) 
     */
    virtual bool agregarIndividuo(Individuo* elIndividuo);

    /** 
     * @brief verifica que el individuo esta en el lugar y lo borra 
     * @param elIndividuo (el individuo que queremos sacar)
     */
    virtual void borrarIndividuo(Individuo* elIndividuo);

    /**
     * @brief verifica si los individuos se pueden comer entre ellos
     * @return si se pueden comer un vacio y si no quien se comio a quien  
     */
    virtual string haPerdido();

    /**
     * @brief actualiza su vecino
     * @param elVecino (el vecino por el que se va a cambiar)  
     */
    virtual void agregarVecino(Lugar* elVecino); 

    /**
     * @brief dice el nombre de su vecino 
     * @return el nombre del vecino o un vacio en caso de que no tenga 
     */
    virtual string decirVecino();

    /**
     * @brief busca cuantos individuos hay en el lugar 
     * @return la cantidad de individuos 
     */
    virtual int cantidadIndividuos();

    /**
     * @brief mostrar su vecino 
     * @return el lugar vecino  
     */
    virtual Lugar* obtenerVecino();

    /**
     * @brief busca si el individuo esta en ese lugar 
     * @param individuo (el individuo a buscar)
     * @return dice si se encuentra o no el individuo buscado  
     */
    virtual bool estaElIndividuo(Individuo* individuo);

    /**
     * @brief devuelve el nombre del individuo que esta en cierta posicion
     * @param posicion (elnumero de la posicion donde esta el individuo)
     * @return el nombre individuo que esta en la posicion indicada
     */
    virtual string nombreIndividuoEnPosicion(int posicion);

};
#else
class Lugar; 
#endif