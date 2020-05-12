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

  // VARIANTE NORMAL DEL JUEGO
/*
  Individuo robot("Robot ", "R", true);
  Individuo zorro("Zorro ", "Z", false);
  Individuo conejo("Conejo", "C", false);
  Individuo lechuga("Lechuga", "L", false);

  conejo.seComeA(&lechuga);
  zorro.seComeA(&conejo);

  listaDeIndividuos.push_back(&robot);
  listaDeIndividuos.push_back(&zorro);
  listaDeIndividuos.push_back(&conejo);
  listaDeIndividuos.push_back(&lechuga);

  Jugador jugador(listaDeIndividuos);
  jugador.jugar();
 */

  // VARIANTE ALTERNATIVA DEL JUEGO; Descomentar siguiente bloque
  Individuo robot("Robot ", "R", true);
  Individuo robot1("Robot1", "P", true);
  Individuo conejo1("Conejo1", "Q", false);
  Individuo zorro("Zorro ", "Z", false);
  Individuo conejo("Conejo", "C", false);
  Individuo lechuga("Lechuga", "L", false);

  conejo.seComeA(&lechuga);
  conejo1.seComeA(&lechuga);
  zorro.seComeA(&conejo);
  zorro.seComeA(&conejo1);

  listaDeIndividuos.push_back(&robot);
  listaDeIndividuos.push_back(&zorro);
  listaDeIndividuos.push_back(&conejo);
  listaDeIndividuos.push_back(&lechuga);
  listaDeIndividuos.push_back(&conejo1);
  listaDeIndividuos.push_back(&robot1);

  Jugador jugador(listaDeIndividuos);
  jugador.jugar();
  
}