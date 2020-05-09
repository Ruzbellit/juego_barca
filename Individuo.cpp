 /*
  Archivo: Individuo.cpp
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-05
  Versión: 0.1
  Licencia: GPL
*/

#include <string>
#include <vector>
#include "Individuo.h"

Individuo::Individuo(string nombreIndividuo, string elIdentificador)
{
  nombre = nombreIndividuo;
  identificador = elIdentificador;
}

Individuo::~Individuo()
{
  // TODO: eliminar punteros (individuosComestibles)
}

void Individuo::seComeA(Individuo* individuoComestible)
{
  individuosComestibles.push_back(individuoComestible);
}

string Individuo::decirNombre()
{
  return nombre;
}

bool Individuo::decirSiPuedeComerseA(Individuo* individuo)
{
  bool respuesta = false;
  for (int cualIndividuo = 0; cualIndividuo < individuosComestibles.size(); cualIndividuo++)
  {
    if (individuosComestibles[cualIndividuo]->decirNombre() == individuo->decirNombre())
    {
      respuesta = true;
    }
  }
  return respuesta;
}

string Individuo::cualEsIdentificador()
{
  return identificador;
}
