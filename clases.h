//Proyecto integrador
//Victor Martínez Román - A01746361
//Lorena A Solís de los Santos - A01746602
using namespace std;

//Parte del codigo hecha por: Victor Martinez A01746361
class Credencial {
  private:
      int vigenciaDia;
      int vigenciaMes;
      string areaC;
  public:
    Credencial() = default;
    Credencial(int vigenciaDia, int vigenciaMes, string areaC) {
      this->vigenciaDia = vigenciaDia;
      this->vigenciaMes = vigenciaMes;
      this->areaC = areaC;
    }
    //Metodos get
    int getVigenciaDia() {return vigenciaDia;}
    int getVigenciaMes() {return vigenciaMes;}
    string getAreaC() {return areaC;}
    //Metodos set
    void setVigencia(int vigenciaDia) {}
    void setEnmicada(int vigenciaMes) {}
    void setArea(string areaC) {}
    //Metodos adicionales
    void verVigenciaDia() {
      cout << "VigenciaDia: " << vigenciaDia << endl;
    }
    void verVigenciaMes() {
      cout << "VigenciaMes: " << vigenciaMes << endl;
    }
    void verAreaC() {
      cout << "Area: " << areaC << endl;
    }
};
//Termina parte del codigo hecha por: Victor Martinez A01746361

//Las siguientes clases conforman la parte hecha en equipo
class Empleado {
private:
    string nombreEmpleado;
    string matriculaEmpleado;
    float salarioEmpleado;
    Credencial credencial;
public:
    Empleado() = default;
    Empleado(string nombreEmpleado, string matriculaEmpleado, float salarioEmpleado, Credencial credencial) {
      this->nombreEmpleado = nombreEmpleado;
      this->matriculaEmpleado = matriculaEmpleado;
      this->salarioEmpleado = salarioEmpleado;
      this->credencial = credencial;
    }
    //Metodos get
    string getNombreEmpleado() {return nombreEmpleado;}
    string getMatriculaEmpleado() {return matriculaEmpleado;}
    float getSalarioEmpleado() {return salarioEmpleado;}
    //Metodos set
    void setNombreEmpleado(string nombreEmpleado) {}
    void setMatriculaEmpleado(string matriculaEmpleado) {}
    void setSalarioEmpleado(float salarioEmpleado) {}
    //Metodos adicionales
    void verCredencial() {
      cout << "VigenciaDia: " << credencial.getVigenciaDia() << " VigenciaMes: " << credencial.getVigenciaMes() << " Area: " << credencial.getAreaC() << endl;
    }
    void verNombreE() {
      cout << "Nombre empleado: " << nombreEmpleado << endl;
    }
    void verMatriculaE() {
      cout << "Matricula empleado: " << matriculaEmpleado << endl;
    }
    void verSalarioE() {
      cout << "Salario empleado: " << salarioEmpleado << endl;
    }
};

class Platillo {
  private:
      string nombrePlatillo;
      string ingrediente;
      float precioPlatillo;
  public:
    Platillo() = default;
    Platillo(string nombrePlatillo, string ingrediente, float precioPlatillo) {
      this->nombrePlatillo = nombrePlatillo;
      this->ingrediente = ingrediente;
      this->precioPlatillo = precioPlatillo;
    }
    //Metodos get
    string getNombrePlatillo() {return nombrePlatillo;}
    string getIngredientes() {return ingrediente;}
    float getPrecioPlatillo() {return precioPlatillo;}
    //Metodos set
    void setNombrePlatillo(string nombrePlatillo) {}
    void setIngredientes(string ingrediente) {}
    void setPrecioPlatillo(float precioPlatillo) {}
    //Metodos adicionales
    void verNombreP() {
      cout << "Nombre platillo: " << nombrePlatillo << endl;
    }
    void verIngredientes() {
      cout << "Ingredientes: " << ingrediente << endl;
    }
    void verPrecioP() {
      cout << "Precio del platillo: " << precioPlatillo << endl;
    }
};

class Habitacion {
  private:
      int numeroHabitacion;
      string tamHabitacion;
      float hospedaje;
  public:
      Habitacion() = default;
      Habitacion(int numeroHabitacion, string tamHabitacion, float hospedaje) {
        this->numeroHabitacion = numeroHabitacion;
        this->tamHabitacion = tamHabitacion;
        this->hospedaje = hospedaje;
      }
      //Metodos get
      int getNumeroHabitacion() {return numeroHabitacion;}
      string getTamHabitacion() {return tamHabitacion;}
      float getHospedaje() {return hospedaje;}
      //Metodos set
      void setNumeroHabitacion(int numeroHabitacion) {}
      void setTamHabitacion(string tamHabitacion) {}
      void setHospedaje(float hospedaje) {}
      //Metodos adicionales
      void verNumeroHab() {
        cout << "Número de habitación: " << numeroHabitacion << endl;
      }
      void verTamHabitacion() {
        cout << "Tamaño habitación: " << tamHabitacion << endl;
      }
      float verHospedaje(string tamHabitacion, float hospedaje) {
        float costo;
        if (tamHabitacion == "Chica") {
          hospedaje = hospedaje * 100;
          costo = 100;
        }
        else if (tamHabitacion == "Mediana") {
          hospedaje = hospedaje * 300;
          costo = 300;
        }
        else if (tamHabitacion == "Grande") {
          hospedaje = hospedaje * 500;
          costo = 500;
        }
        else {
          hospedaje = 0;
          cout << "Tamaño no valido" << endl;
        }
        cout << "Costo por noche: " << costo << endl;
        cout << "Costo del hospedaje: " << hospedaje << endl;
        return hospedaje;
      }
};

class Huesped {
  private:
      string nombreHuesped;
      string telefonoHuesped;
      float cuentaHuesped;
      Habitacion habitacion;
      Platillo platillo;
  public:
      Huesped() = default;
      Huesped(string nombreHuesped, string telefonoHuesped, float cuentaHuesped, Habitacion& habitacionH, Platillo& platillo1) {
        this->nombreHuesped = nombreHuesped;
        this->telefonoHuesped = telefonoHuesped;
        this->cuentaHuesped = cuentaHuesped;
        this->habitacion = habitacionH;
        this->platillo = platillo1;
      }
      //Metodos get
      string getNombreHuesped() {return nombreHuesped;}
      string getTelefonoHuesped() {return telefonoHuesped;}
      float getCuentaHuesped() {return cuentaHuesped;}
      //Metodos set
      void setNombreHuesped(string nombreHuesped) {}
      void setTelefonoHuesped(string telefonoHuesped) {}
      void setCuentaHuesped(float cuentaHuesped) {}
      //Metodos adicionales
      void verNombreH() {
        cout << "Nombre huésped: " << nombreHuesped << endl;
      }
      void verTelefonoH() {
        cout << "Teléfono huésped: " << telefonoHuesped << endl;
      }
      float verCuentaH() {
        float Total;
        Total = habitacion.verHospedaje(habitacion.getTamHabitacion(), habitacion.getHospedaje()) + platillo.getPrecioPlatillo();
        cout << "Total a pagar: " << Total << endl;
      }
};
