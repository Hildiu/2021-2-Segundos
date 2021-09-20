//
// Created by MARIA HILDA BERMEJO RIOS on 9/20/21.
//

#include "UFunciones.h"


unsigned long int leerSegundos()
{ //-----------------------------
  //-- la funcion lee una valor mayor a 1
  unsigned int segundos;

  cout << "Segundos : ";
  cin >> segundos;
  return segundos;
}


void convertir(unsigned long int nSeg, unsigned long int & h, unsigned long int & m, unsigned long int  &s)
//---------------------------------------------------------------------------------------------------------
{

  h = nSeg / 3600;
  nSeg = nSeg % 3600;
  m = nSeg / 60;
  s = nSeg % 60;
}
