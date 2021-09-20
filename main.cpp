#include "UFunciones.h"

int main()
{
  unsigned long int nSegundos,h=0,m=0,s=0;

  nSegundos = leerSegundos();
  convertir(nSegundos, h, m, s);
  cout << "Equivale a \n";
  cout << h << " : " << m << " : " << s << "\n";
}


