#include <iostream>
#include <string>
#include "Individuo.h"
#include "Lugar.h"
#include "Orilla.h"
#include "Barca.h"
#include "Jugador.h"

using namespace std;

string probarSiHaPerdido(bool prueba)
{
  if(prueba)
  {
    return "true";
  }
  else
  {
    return "false";
  }
}

int main() 
{
  vector<Individuo*> listaDeIndividuos;

  Individuo robot("Robot");
  Individuo zorro("Zorro");
  Individuo conejo("Conejo");
  Individuo lechuga("Lechuga");

  conejo.seComeA(&lechuga);
  zorro.seComeA(&conejo);

  // Individuo bryan("Bryan");
  // Individuo belly("Ruzbellit");
  // bryan.secomeA(&belly);

  listaDeIndividuos.push_back(&robot);
  listaDeIndividuos.push_back(&zorro);
  listaDeIndividuos.push_back(&conejo);
  listaDeIndividuos.push_back(&lechuga);

  Jugador jugador(listaDeIndividuos);

  jugador.jugar();
  jugador.imprimirOpciones();
  jugador.desplazarBarca();
  jugador.mostrarEstadoJuego();



//   cout << "El vecino inicial de barca es:" << barca.decirVecino() << endl;
//   barca.desplazarse();
//   cout << "Prueba que la barca no se movio :" << barca.decirVecino() << endl;
//   barca.agregarIndividuo(&conejo);
//   barca.desplazarse();
//   cout << "Prueba que la barca se mueve: " << barca.decirVecino() << endl;

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

//   orillaIzquierda.haPerdido();

//   cout << probarSiHaPerdido(orillaIzquierda.haPerdido()) << endl;

//   orillaIzquierda.sacarIndividuo(&zorro);

//   cout << orillaIzquierda.mostrarIndividuosContenidos() << endl;

//   cout << probarSiHaPerdido(orillaIzquierda.haPerdido()) << endl;






}