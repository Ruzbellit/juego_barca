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

//   orillaIzquierda.borrarIndividuo(&zorro);

//   cout << orillaIzquierda.mostrarIndividuosContenidos() << endl;

//   cout << probarSiHaPerdido(orillaIzquierda.haPerdido()) << endl;






}