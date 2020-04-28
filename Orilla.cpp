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
#include "Lugar.h"
#include "Orilla.h"

using namespace std;

Orilla::Orilla(string elNombre) : Lugar(elNombre)
{
  nombre = elNombre;
}

Orilla::~Orilla()
{
  //Nota: Destruir puntero individuosContenidos
}

void Orilla::agregarVecino(Lugar* elVecino)
{
  vecino = elVecino;
}


  
