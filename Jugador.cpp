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
#include "Orilla.h"
#include "Barca.h"
#include "Jugador.h"

using namespace std;

Jugador::Jugador(vector<Individuo*> losIndividuos)
{
  individuos = losIndividuos;
  orillaIzquierda = new Orilla("Izquierda");
  orillaDerecha = new Orilla("Derecha");
  barca = new Barca("barca", orillaIzquierda, orillaDerecha);

}

Jugador::~Jugador()
{
 //destruir puntero
}

// TODO: mejorar o borrar metodo
/* string Jugador::imprimirPosicionBarca(string nombreVecino)
{
  if (barca->mostrarVecino() == nombreVecino)
  {
    return barca->decirNombre();
  }
  else
  {
    return "\t";
  }
} */

/*
 * TODO: cambiar nombre de funcion y actualizar documentación
 * @param lugar
 * @param posicionIndividuo
 * @return string
 * Dado un 'lugar', la función extrae el nombre del invididuo en la posición especificada, si no existe, retorna una tabulación
*/
/* string Jugador::extraerNombreIndividuo(Lugar* lugar, int posicionIndividuo)
{
  string respuesta = "\t";
  if (lugar != nullptr)
  {
    cout << "lugar: " + lugar->decirNombre() +": "+ to_string(posicionIndividuo) << endl;
    if ( lugar->cantidadIndividuos() <= posicionIndividuo )
    {
      respuesta = lugar->sacarIndividuoEnPosicion(posicionIndividuo)->decirNombre();
    }
  }
  else
  {
    cout << "lugar es un putr" << endl;
  }
  return respuesta;
}

void Jugador::mostrarEstadoJuego()
{
  string lugares = "| " + orillaIzquierda->decirNombre() + "\t\t| " + imprimirPosicionBarca(orillaIzquierda->decirNombre()) + "\t\t| " + imprimirPosicionBarca(orillaDerecha->decirNombre()) + "\t\t| " + orillaDerecha->decirNombre() + "\t\t|\n";

  cout << lugares << endl;

  string posicionIndividuos = "";
  cout << "extraerNombreIndividuos++" << endl;
  for(int i = 0; i < individuos.size(); i++)
  {
    posicionIndividuos =
    extraerNombreIndividuo(orillaIzquierda, i) + "\t\t| " +
    extraerNombreIndividuo(orillaIzquierda->obtenerVecino(), i) + "\t\t| " +
    extraerNombreIndividuo(orillaDerecha->obtenerVecino(), i) + "\t\t| " +
    extraerNombreIndividuo(orillaDerecha, i) + "\t\t| ";
  }

  cout << posicionIndividuos << endl;
}
 */
void Jugador::jugar()
{
  for(int cualIndividuo = 0; cualIndividuo < individuos.size(); cualIndividuo++)
  {
    orillaIzquierda->agregarIndividuo(individuos[cualIndividuo]);
  }
  // cout << "Prueba cuales individuos hay en la izq: " << orillaIzquierda->mostrarIndividuosContenidos() << endl;
  barca->desplazarse();
  // cout << "Prueba que la barca no se movio: " << barca->mostrarVecino() << endl;
  barca->agregarIndividuo(individuos[1]);
  barca->agregarIndividuo(individuos[2]);
  orillaIzquierda->sacarIndividuo(individuos[1]);
  orillaIzquierda->sacarIndividuo(individuos[2]);
  barca->desplazarse();
  // cout << "Prueba que la barca se mueve: " << barca->mostrarVecino() << endl;
  // cout << "Prueba cuantos individuos hay en la izq : " << orillaIzquierda->mostrarIndividuosContenidos() << endl;
  orillaIzquierda->haPerdido();

  imprimirOpciones();

  leerTeclado();

// // prueba comer
//   cout << zorro.decirSiPuedeComerseA(&conejo) << endl;
//   zorro.seComeA(&conejo);
//   cout << zorro.decirSiPuedeComerseA(&conejo) << endl;

//   // Lugar orillaIzquierda;

//   orillaIzquierda.agregarVecino(&barca);

//   cout << orillaIzquierda.mostrarVecino() << endl;

//   orillaIzquierda.agregarIndividuo(&conejo);

//   orillaIzquierda.agregarIndividuo(&zorro);

//   cout << orillaIzquierda.mostrarIndividuosContenidos() << endl;

  

//   orillaIzquierda.sacarIndividuo(&zorro);

//   cout << orillaIzquierda.mostrarIndividuosContenidos() << endl;

 



}

void Jugador::leerTeclado()
{
  string opcion = "";
    cout << "¿Que deseas hacer?: " << endl;
  getline(cin, opcion);
  cout << "Ejecutar opcion " << opcion << endl;

  if (opcion == "R" || opcion == "r")
  {
    cout << "mover al robot" << endl;
  }
  else if (opcion == "Z" || opcion == "z")
  {
    cout << "mover al zorro" << endl;
  }
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

}

void Jugador::terminarJuego()
{

}