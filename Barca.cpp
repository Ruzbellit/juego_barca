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
#include "Individuo.h"
#include "Barca.h"
#include "Lugar.h"

Barca::Barca(string elNombre, Lugar* laOrillaIzquierda, Lugar* laOrillaDerecha) : Lugar(elNombre)
{
  nombre = elNombre;
  orillaIzquierda = laOrillaIzquierda;
  orillaDerecha = laOrillaDerecha;
  vecino = laOrillaIzquierda;
}

Barca::~Barca()
{
  
}

void Barca::agregarIndividuo(Individuo* elIndividuo)
{
  if(individuosContenidos.size() < 2)
  {
    individuosContenidos.push_back(elIndividuo);  
  }
  //return la barca esta llena
}

bool Barca::desplazarse()
{
  bool respuesta = false;
  if(individuosContenidos.size() >= 1)
  {
    if(vecino == orillaIzquierda)
    {
      vecino = orillaDerecha;
    }
    respuesta = true;
  }
  return respuesta;
}

string Barca::mostrarVecino()
{ 
  return vecino->decirNombre();
}

/*
crear metodo en barca para barca->actualizaVecino(string nombreOrillaVecina), el metodo solo recibe el nombre del vecino (orilla), ese dato es suficiente para que la bacar pueda actualizar su vecino

orilla también tiene un metodo para actualizar vecino. Si es la barca, notifica a la barca que él es su nuevo vecino y la otra orilla actualiza su vecino a nullptr
*/

