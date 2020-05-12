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

  El juego consiste en lo siguiente: hay un robot que debe transportar un zorro, un conejo y
  una lechuga desde un lado del río hasta la otra orilla, usando una barca. En la barca solo
  cabe uno de los tres individuos, además del robot. El problema es que si el robot deja
  solos al zorro y el conejo, el zorro se comerá el conejo. Y si deja solos al conejo y la
  lechuga, el conejo se comerá la lechuga. El jugador debe controlar que órdenes dar, para
  lograr que el robot transporte los tres individuos a la otra orilla, sanos y salvos.

*/
#include <string>
#include <iostream>
#include "Individuo.h"
#include "Jugador.h"

using namespace std;



int main() 
{
    string opciones =
      "===========================================\n"
      "Las órdenes que puede dar el jugador son (usando el teclado): \n"
      "B la Barca se mueve a la otra orilla\n"
      "R el Robot salta de/a la barca\n"
      "Z el Zorro salta de/a la barca\n"
      "C el Conejo salta de/a la barca\n"
      "L la Lechuga salta de/a la barca\n"
      "X salir del juego\n"
      "===========================================\n\n";
    cout << opciones << endl;


  vector<Individuo*> listaDeIndividuos;

  // VARIANTE NORMAL DEL JUEGO

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


  // VARIANTE ALTERNATIVA DEL JUEGO; Descomentar siguiente bloque
  // Individuo robot("Robot ", "R", true);
  // Individuo robot1("Robot1", "P", true);
  // Individuo conejo1("Conejo1", "Q", false);
  // Individuo zorro("Zorro ", "Z", false);
  // Individuo conejo("Conejo", "C", false);
  // Individuo lechuga("Lechuga", "L", false);

  // conejo.seComeA(&lechuga);
  // conejo1.seComeA(&lechuga);
  // zorro.seComeA(&conejo);
  // zorro.seComeA(&conejo1);

  // listaDeIndividuos.push_back(&robot);
  // listaDeIndividuos.push_back(&zorro);
  // listaDeIndividuos.push_back(&conejo);
  // listaDeIndividuos.push_back(&lechuga);
  // listaDeIndividuos.push_back(&conejo1);
  // listaDeIndividuos.push_back(&robot1);

  // Jugador jugador(listaDeIndividuos);
  // jugador.jugar();
  
}