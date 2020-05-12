//Falta historia y comentario
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