#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  Date fecha{12, 9, 2022};
  int dia;
  int mes;
  int anual;
  cout << "Esta es la fecha introduccida por última vez: ";
  fecha.mostrarDetalles(fecha.getyear(), fecha.getmonth(), fecha.getday());
  cout << "\n"
       << "Introduzca el día actual (Si es que es el correcto, escribir el "
          "mismo)"
       << endl;
  cin >> dia;
  fecha.setday(dia);
  cout << "\n"
       << "Introduzca el mes actual (Si es que es el correcto, escribir el "
          "mismo)"
       << endl;
  cin >> mes;
  if (mes <= 12 && mes >= 1)
    fecha.setmonth(mes);
  else {
    cout << "¡¡¡MES NO ADMITIDO!!!" << endl;
  }
  cout << "\n"
       << "Introduzca el año actual (Si es que es el correcto, escribir el "
          "mismo)"
       << endl;
  cin >> anual;
  fecha.setyear(anual);
  cout << "Esta es la fecha actualizada (Si sale 0 en el mes ha ocurrido un error, actualizelo de vuelta): ";
  fecha.mostrarDetalles(fecha.getyear(), fecha.getmonth(), fecha.getday());
};