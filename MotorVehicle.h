#include <iostream>
#include <string>

using namespace std;

class MotorVehicle {
public:
  MotorVehicle(std::string Nmarca, std::string Ntipo, int Nfecha,
               std::string Ncolor, int Ncapacidad) {
    Nmarca = marca;
    Ntipo = TipoDeGasolina;
    Nfecha = fechaManufactura;
    Ncolor = color;
    Ncapacidad = CapacidadMotor;
  };

  void setmarca(std::string Nmarca) {
    marca = Nmarca;
    }

  std::string getmarca() const{
    return marca;
    };

  void settipo(std::string Ntipo) {
    TipoDeGasolina = Ntipo;
    }

  std::string gettipo() const {
    return TipoDeGasolina;
    };

  void setfecha(int Nfecha) {
    fechaManufactura = Nfecha;
    }

  int getfecha() const {
    return fechaManufactura; 
    };

  void setcolor(std::string Ncolor) { 
    color = Ncolor; 
    }

  std::string getcolor() const { 
    return color; 
    };

  void setcapacidad(int Ncapacidad) { 
    CapacidadMotor = Ncapacidad; 
    }

  int getcapacidad() const { 
    return CapacidadMotor; 
    };

  int mostrarDetalles(std::string Nmarca, std::string Ntipo, int Nfecha, std::string Ncolor, int Ncapacidad) {
    cout << "Marca del vehículo: " << Nmarca << endl;
    cout << "Tipo de gasolina del vehículo: " << Ntipo << endl;
    cout << "Año de manufacturación del vehículo: " << Nfecha << endl;
    cout << "Color del vehículo: " << Ncolor << endl;
    cout << "Capacidad del motor del vehículo: " << Ncapacidad << endl;
    return 0;
  };

private:
  std::string marca;
  std::string TipoDeGasolina;
  int fechaManufactura{0};
  std::string color;
  int CapacidadMotor{0};
};