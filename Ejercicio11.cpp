#include "MotorVehicle.h"
#include <iostream>
#include <string>

int main() {
  MotorVehicle vehiculo{"", "", 0, "", 0};
  string marca;
  string tipo;
  int fecha;
  string color;
  int capacidad;

  cout << "Introduzca las carcterísticas de su vehículo a continuación.\n¿Cúal "
          "es la marca?: "
       << endl;
  cin >> marca;
  cout << "¿Cúal es el tipo de gasolina?: " << endl;
  cin >> tipo;
  cout << "¿Cúal es el año de fabricación?: " << endl;
  cin >> fecha;
  cout << "¿Cúal es la color?: " << endl;
  cin >> color;
  cout << "¿Cúal es la capacidad del motor?: " << endl;
  cin >> capacidad;
  vehiculo.setmarca(marca);
  vehiculo.settipo(tipo);
  vehiculo.setfecha(fecha);
  vehiculo.setcolor(color);
  vehiculo.setcapacidad(capacidad);
  vehiculo.mostrarDetalles(marca, tipo, fecha, color, capacidad);
}