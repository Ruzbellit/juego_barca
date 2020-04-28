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

#include <vector>
#include <iostream>
#include "Individuo.h"
#include "Lugar.h"

using namespace std;

Lugar::Lugar(string elNombre)
{
  nombre = elNombre;
}


Lugar::~Lugar()
{
  //Nota: Destruir puntero individuosContenidos
}

void Lugar::agregarIndividuo(Individuo* elIndividuo)
{
  individuosContenidos.push_back(elIndividuo);
}

void Lugar::sacarIndividuo(Individuo* elIndividuo)
{
 for(int cualIndividuo = 0; cualIndividuo < individuosContenidos.size(); cualIndividuo++)
 {
   if(individuosContenidos[cualIndividuo] == elIndividuo)
   {
     individuosContenidos.erase(individuosContenidos.begin() + cualIndividuo);
   }
 }
}

bool Lugar::haPerdido()
{
  bool perdio = false;
  for(int cualIndividuo = 0; cualIndividuo < individuosContenidos.size(); cualIndividuo++)
  {
    for(int cualIndividuoAComer = 0; cualIndividuoAComer < individuosContenidos.size(); cualIndividuoAComer++)
    {
      if(individuosContenidos[cualIndividuo]->decirSiPuedeComerseA(individuosContenidos[cualIndividuoAComer]) == true)
      {
        perdio = true;
      }
    }
  }
  return perdio;
}

string Lugar::mostrarIndividuosContenidos()
{
  string contenedor = "Los elementos son: ";
  for(int cualIndividuo = 0; cualIndividuo < individuosContenidos.size(); cualIndividuo++)
  {
    contenedor += individuosContenidos[cualIndividuo]->decirNombre() + " ";
  }
  return contenedor;
}

void Lugar::agregarVecino(Lugar* vecino)
{

}

string Lugar::decirNombre()
{
  return nombre;
}

string Lugar::mostrarVecino()
{
  if(vecino == nullptr)
  {
    return "no tiene un pinchesito vecinito";
  }
    return vecino->decirNombre();
}

Lugar* Lugar::obtenerVecino()
{
  return vecino;
}

int Lugar::cantidadIndividuos()
{
  if (individuosContenidos.empty())
  {
    return 0;
  }
  else
  {
    return individuosContenidos.size();
  }
}

Individuo* Lugar::sacarIndividuoEnPosicion(int posicion)
{
  Individuo* individuo = nullptr;
  if (!individuosContenidos.empty() && individuosContenidos.size() <= posicion)
  {
    individuo = individuosContenidos[posicion];
  }
  return individuo;
}