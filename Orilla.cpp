/*
  Archivo: Orilla.cpp
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
#include <iostream>
#include "Lugar.h"
#include "Orilla.h"

using namespace std;

Orilla::Orilla(string elNombre, Lugar* elVecino) : Lugar(elNombre)
{
  nombre = elNombre;
  vecino = elVecino;
}

Orilla::~Orilla()
{
  //TODO: Destruir puntero individuosContenidos
}


  
