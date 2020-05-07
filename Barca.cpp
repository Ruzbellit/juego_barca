/*
  Archivo: Barca.cpp
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-05
  Versión: 0.1
  Licencia: GPL
*/

#include <vector>
#include "Individuo.h"
#include "Barca.h"
#include "Lugar.h"
#include "Jugador.h"

Barca::Barca(string elNombre, Lugar* laOrillaIzquierda, Lugar* laOrillaDerecha) : Lugar(elNombre)
{
  nombre = elNombre;
  orillaIzquierda = laOrillaIzquierda;
  orillaDerecha = laOrillaDerecha;
}

Barca::~Barca()
{
  //eliminar punteros
}

bool  Barca::agregarIndividuo(Individuo* elIndividuo)
{
  if(individuosContenidos.size() < 2)
  {
    individuosContenidos.push_back(elIndividuo); 
    return true;
  }
  return false;
}

void Barca::desplazarse()
{
  if(this->cantidadIndividuos() >= 1)
  {
    if(this->decirVecino() == orillaDerecha->decirNombre())
    {
      vecino = orillaIzquierda;
      orillaIzquierda->agregarVecino(this);
      orillaDerecha->agregarVecino(nullptr);
    }
    else
    {
      vecino = orillaDerecha;
      orillaDerecha->agregarVecino(this);
      orillaIzquierda->agregarVecino(nullptr);
    }
  }
}
