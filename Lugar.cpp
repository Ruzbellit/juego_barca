/*
  Archivo: Lugar.cpp
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-11
  Versión: 0.1
  Licencia: GPL
*/

#include <vector>
#include <string>
#include "Individuo.h"
#include "Lugar.h"

using namespace std;

Lugar::Lugar(string elNombre)
{
  nombre = elNombre;
}

Lugar::~Lugar()
{

}

string Lugar::decirNombre()
{
  return nombre;
}

bool Lugar::agregarIndividuo(Individuo* elIndividuo)
{
  individuosContenidos.push_back(elIndividuo);
  return true;
}

void Lugar::borrarIndividuo(Individuo* elIndividuo)
{
 for(int cualIndividuo = 0; cualIndividuo < individuosContenidos.size(); cualIndividuo++)
 {
   if(individuosContenidos[cualIndividuo] == elIndividuo)
   {
     individuosContenidos.erase(individuosContenidos.begin() + cualIndividuo);
   }
 }
}

string Lugar::haPerdido()
{
  string comieron = "";
  bool hayConductor = false;
  for(int cualIndividuo = 0; cualIndividuo < individuosContenidos.size(); cualIndividuo++)
  {
    if(individuosContenidos[cualIndividuo]->decirSiPuedeConducir() == true)
    {
      hayConductor = true;
    }
  }

  for(int cualIndividuo = 0; cualIndividuo < individuosContenidos.size(); cualIndividuo++)
  {
    for(int cualIndividuoAComer = 0; cualIndividuoAComer < individuosContenidos.size(); cualIndividuoAComer++)
    {
      if(individuosContenidos[cualIndividuo]->decirSiPuedeComerseA(individuosContenidos[cualIndividuoAComer]) == true && !hayConductor)
      {
        comieron = individuosContenidos[cualIndividuo]->decirNombre() + " se comió a " + individuosContenidos[cualIndividuoAComer]->decirNombre();
      }
    }
  }
  return comieron;
}

void Lugar::agregarVecino(Lugar* elVecino)
{
  vecino = elVecino;
}

string Lugar::decirVecino()
{
  if(vecino == nullptr)
  {
    return "\t";
  }
  else
  {
    return vecino->decirNombre();
  }
}

int Lugar::cantidadIndividuos()
{
  if(individuosContenidos.empty())
  {
    return 0;
  }
  else
  {
    return individuosContenidos.size();
  }
}

Lugar* Lugar::obtenerVecino()
{
  return vecino;
}

bool Lugar::estaElIndividuo(Individuo* individuo)
{
  bool respuesta = false;
  for(int cualIndividuo = 0; cualIndividuo < individuosContenidos.size(); cualIndividuo++)
  {
    if(individuo == individuosContenidos[cualIndividuo])
    {
      respuesta = true;
    }
  }
  return respuesta;
}

string Lugar::nombreIndividuoEnPosicion(int posicion)
{
  string nombreIndividuo = "";
  if (!individuosContenidos.empty() && individuosContenidos.size() > posicion)
  {
    nombreIndividuo = individuosContenidos[posicion]->decirNombre();
  }
  return nombreIndividuo;
}