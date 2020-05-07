 /*
  Archivo: Jugador.cpp
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
#include "Orilla.h"
#include "Barca.h"
#include "Jugador.h"

using namespace std;

Jugador::Jugador(vector<Individuo*> losIndividuos)
{
  individuos = losIndividuos;
  barca = new Barca("Barca ", orillaIzquierda, orillaDerecha);
  orillaIzquierda = new Orilla("Izquierda", barca);
  orillaDerecha = new Orilla("Derecha", nullptr);
  barca->agregarVecino(orillaIzquierda);
}

Jugador::~Jugador()
{
 //destruir puntero
}

/**
 * TODO: Corregir tabulaciones
 */
void Jugador::mostrarEstadoJuego()
{
  string lugares = "| " + orillaIzquierda->decirNombre() + "\t\t| " + orillaIzquierda->decirVecino()  + "\t\t| " +  orillaDerecha->decirVecino() + "\t\t| " + orillaDerecha->decirNombre() + "\t\t|\n";
  string posicionIndividuos = "";

  for (int i = 0; i < individuos.size(); i++)
  {
    posicionIndividuos += "| " + orillaIzquierda->nombreIndividuoEnPosicion(i) + "\t\t| ";
    if (orillaIzquierda->decirVecino() == "Barca ")
    {
      posicionIndividuos += barca->nombreIndividuoEnPosicion(i) + "\t\t\t| " + "\t\t\t| ";
    } else
    {
      posicionIndividuos += "\t\t\t| " + barca->nombreIndividuoEnPosicion(i) + "\t\t\t| ";
    }
    posicionIndividuos += orillaDerecha->nombreIndividuoEnPosicion(i) + "\t\t\t|\n";
  }

  cout << lugares << posicionIndividuos << endl;
  leerTeclado();
}

void Jugador::jugar()
{
  // for(int cualIndividuo = 0; cualIndividuo < individuos.size(); cualIndividuo++)
  // {
  //   orillaIzquierda->agregarIndividuo(individuos[cualIndividuo]);
  // }
  orillaIzquierda->agregarIndividuo(individuos[0]);
  orillaIzquierda->agregarIndividuo(individuos[1]);
  // orillaIzquierda->agregarIndividuo(individuos[2]);
  orillaIzquierda->agregarIndividuo(individuos[3]);
  barca->agregarIndividuo(individuos[2]);
  cout << orillaIzquierda->mostrarIndividuosContenidos() << endl;
  cout << barca->mostrarIndividuosContenidos() << endl;
  cout << orillaDerecha->mostrarIndividuosContenidos() << endl;

  // // cout << "Prueba cuales individuos hay en la izq: " << orillaIzquierda->mostrarIndividuosContenidos() << endl;
  // barca->desplazarse();
  // // cout << "Prueba que la barca no se movio: " << barca->decirVecino() << endl;
  // barca->agregarIndividuo(individuos[1]);
  // barca->agregarIndividuo(individuos[2]);
  // orillaIzquierda->sacarIndividuo(individuos[1]);
  // orillaIzquierda->sacarIndividuo(individuos[2]);
  // barca->desplazarse();
  // // cout << "Prueba que la barca se mueve: " << barca->decirVecino() << endl;
  // // cout << "Prueba cuantos individuos hay en la izq : " << orillaIzquierda->mostrarIndividuosContenidos() << endl;
  // orillaIzquierda->haPerdido();

  imprimirOpciones();
  mostrarEstadoJuego();
  leerTeclado();

  // // prueba comer
  //   cout << zorro.decirSiPuedeComerseA(&conejo) << endl;
  //   zorro.seComeA(&conejo);
  //   cout << zorro.decirSiPuedeComerseA(&conejo) << endl;
  //   // Lugar orillaIzquierda;
  //   orillaIzquierda.agregarVecino(&barca);
  //   cout << orillaIzquierda.decirVecino() << endl;
  //   orillaIzquierda.agregarIndividuo(&conejo);
  //   orillaIzquierda.agregarIndividuo(&zorro);
  //   cout << orillaIzquierda.mostrarIndividuosContenidos() << endl;
  //   orillaIzquierda.sacarIndividuo(&zorro);
  //   cout << orillaIzquierda.mostrarIndividuosContenidos() << endl;

}

void Jugador::moverIndividuo(Individuo* individuo)
{
  if(barca->estaElIndividuo(individuo) == true)
  {
    barca->sacarIndividuo(individuo);
    (barca->obtenerVecino())->agregarIndividuo(individuo);
  }
  else
  {
    if((barca->obtenerVecino())->estaElIndividuo(individuo) == true)
    {
      (barca->obtenerVecino())->sacarIndividuo(individuo);
      barca->agregarIndividuo(individuo);
    }
  }
}

void Jugador::leerTeclado()
{
  string opcion = "";
  cout << "¿Que deseas hacer?: ";
  getline(cin, opcion);
  cout << "Ejecutar opcion " << opcion << " -> ";

  if (opcion == "R")
  {
    cout << "mover al robot" << endl;
  }
  else if (opcion == "Z")
  {
    cout << "mover al zorro" << endl;
  }
  else {
    cout << "La opcion ingresada no es valida" << endl;
  }
  mostrarEstadoJuego();
}

void Jugador::imprimirOpciones()
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
}

void Jugador::ejecutarAccion()
{
 //Falta
}

void Jugador::terminarJuego()
{
 //Falta
}