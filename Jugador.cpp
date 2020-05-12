 /*
  Archivo: Jugador.cpp
  Autor: Daniel Rodriguez sanchez (1927631)
  Autor: Ruzbellit Rossy Romero Ramirez (1925456)
  Email: daniel.rodriguez.sanchez@correounivalle.edu.co
  Email: ruzbellit.romero@correounivalle.edu.co
  Fecha creación: 2020-03-24
  Fecha última modificación: 2020-05-12
  Versión: 0.1
  Licencia: GPL
*/

#include <vector>
#include <iostream>
#include "Individuo.h"
#include "Orilla.h"
#include "Barca.h"
#include "Jugador.h"

using namespace std;

Jugador::Jugador(vector<Individuo*> losIndividuos)
{
  individuos = losIndividuos;
  orillaIzquierda = new Orilla("Izquierda", nullptr);
  orillaDerecha = new Orilla("Derecha", nullptr);
  barca = new Barca("Barca ", orillaIzquierda, orillaDerecha);
  orillaIzquierda->agregarVecino(barca);
  barca->agregarVecino(orillaIzquierda);
  alguienAhogado = "";
}

Jugador::~Jugador()
{
 delete orillaIzquierda;
 orillaIzquierda = nullptr;

 delete orillaDerecha;
 orillaDerecha = nullptr;
}

void Jugador::mostrarEstadoJuego()
{
  string lugares = "| " + orillaIzquierda->decirNombre() + "\t\t| " + orillaIzquierda->decirVecino()  + "\t\t| " +  orillaDerecha->decirVecino() + "\t\t| " + orillaDerecha->decirNombre() + "\t\t|\n";
  string posicionIndividuos = "";

  for(int i = 0; i < individuos.size(); i++)
  {
    if(orillaIzquierda->cantidadIndividuos() > i)
    {
      posicionIndividuos += "| " + orillaIzquierda->nombreIndividuoEnPosicion(i) + "\t\t| ";
    }
    else
    {
      posicionIndividuos += "| " + orillaIzquierda->nombreIndividuoEnPosicion(i) + "\t\t\t| ";
    }
  
    if(orillaIzquierda->decirVecino() == "Barca ") 
    {
      if(barca->cantidadIndividuos() > i)
      {
        posicionIndividuos += barca->nombreIndividuoEnPosicion(i) + "\t\t| " + "\t\t\t| ";
      }
      else
      {
        posicionIndividuos += barca->nombreIndividuoEnPosicion(i) + "\t\t\t| " + "\t\t\t| ";
      }
    }
    else 
    {
      if(barca->cantidadIndividuos() > i)
      {
        posicionIndividuos += "\t\t\t| " + barca->nombreIndividuoEnPosicion(i) + "\t\t| ";
      }
      else
      {
        posicionIndividuos += "\t\t\t| " + barca->nombreIndividuoEnPosicion(i) + "\t\t\t| ";
      } 
    }

    if(orillaDerecha->cantidadIndividuos() > i)
    {
      posicionIndividuos += orillaDerecha->nombreIndividuoEnPosicion(i) + "\t\t|\n";
    }
    else
    {
      posicionIndividuos += orillaDerecha->nombreIndividuoEnPosicion(i) + "\t\t\t|\n";
    }
  }

  cout << lugares << posicionIndividuos << endl;

  validarPerdioGano();
}

void Jugador::validarPerdioGano()
{
  string perdio = barca->haPerdido() + orillaIzquierda->haPerdido() + orillaDerecha->haPerdido();
  if(perdio != "" )
  {
    cout << "¡¡¡HAS PERDIDO!!!" << endl;
    cout << perdio << endl;
  } 
  else if(alguienAhogado != "")
  {
    cout << "¡¡¡HAS PERDIDO!!!" << endl;
    cout << alguienAhogado << endl;
  }
  else
  {
    if(orillaDerecha->cantidadIndividuos() == individuos.size())
    {
      cout << "***¡¡¡HAS GANADO!!!***" << endl;
      cout << "   ¡FELICITACIONES!  " << endl;
    }
    else
    {
      leerTeclado();
    }
  }
}

void Jugador::jugar()
{
  for(int cualIndividuo = 0; cualIndividuo < individuos.size(); cualIndividuo++)
  {
    orillaIzquierda->agregarIndividuo(individuos[cualIndividuo]);
  }

  mostrarEstadoJuego();
}

void Jugador::seAhogoIndividuo(string nombreIndividuo)
{
  alguienAhogado = nombreIndividuo + " se ahogó";
}

void Jugador::moverIndividuo(Individuo* individuo)
{
  // si el individuo esta en la barca
  if(barca->estaElIndividuo(individuo) == true)
  {
    barca->borrarIndividuo(individuo);
    (barca->obtenerVecino())->agregarIndividuo(individuo);
  }
  else
  {
    // si el individuo esta en el vecino de la barca 
    if((barca->obtenerVecino())->estaElIndividuo(individuo) == true)
    {
      if(barca->cantidadIndividuos() < 2)
      {
        (barca->obtenerVecino())->borrarIndividuo(individuo);
        barca->agregarIndividuo(individuo);
      }
      else
      {
        cout << "No caben mas en la Barca!!" << endl;
      }
    }
    // si el individuo no esta en el vecino de la barca
    else 
    {
      if(barca->decirVecino() == orillaDerecha->decirNombre())
      {
        orillaIzquierda->borrarIndividuo(individuo);
        seAhogoIndividuo(individuo->decirNombre());
      }
      else 
      {
        orillaDerecha->borrarIndividuo(individuo);
        seAhogoIndividuo(individuo->decirNombre());
      }
    }
  }
}

void Jugador::leerTeclado()
{
  string opcion = "";
  cout << "¿Que deseas hacer?: ";
  getline(cin, opcion);
  cout << "Ejecutar opcion " << opcion << " -> ";
  ejecutarAccion(opcion);
}

void Jugador::ejecutarAccion(string opcion)
{
  if(opcion == "X")
  {
    cout << "Salir del juego " << endl;
    cout << "¡SALISTE DEL JUEGO! " << endl;
  }
  else
  {
    if(opcion == "B")
    {
      cout << "mover" << barca->decirNombre() << endl;
      bool pudoMoverse = barca->desplazarse();
      if(!pudoMoverse)
      {
        cout << "No hay conductor para la Barca!" << endl;
      }
      mostrarEstadoJuego();
    }
    else
    {
      for(int i = 0; individuos.size() > i; i++)
      {
        if(opcion == individuos[i]->cualEsIdentificador())
        {
          cout << "mover " << individuos[i]->decirNombre() << endl;
          moverIndividuo(individuos[i]);
          i = individuos.size();
        }
        else
        {
          if(i+1 == individuos.size())
          {
            cout << "La opcion ingresada no es valida!" << endl;
          }
        }
      }
      mostrarEstadoJuego();
    }
  }  
}
