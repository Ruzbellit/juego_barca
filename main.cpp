/*
  Archivo: Main.cpp
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-11
  Versión: 0.1
  Licencia: GPL
*/
#include <string>
#include "Individuo.h"
#include "Jugador.h"

using namespace std;

int main() 
{
  vector<Individuo*> listaDeIndividuos;

  Individuo robot("Robot ","R");
  Individuo zorro("Zorro ", "Z");
  Individuo conejo("Conejo", "C");
  Individuo lechuga("Lechuga", "L");

  conejo.seComeA(&lechuga);
  zorro.seComeA(&conejo);

  listaDeIndividuos.push_back(&robot);
  listaDeIndividuos.push_back(&zorro);
  listaDeIndividuos.push_back(&conejo);
  listaDeIndividuos.push_back(&lechuga);

  Jugador jugador(listaDeIndividuos);

  jugador.jugar();
  
}