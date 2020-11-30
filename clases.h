using namespace std;

class Habitacion {
  private:
      int numeroHabitacion;
      string tamHabitacion;
  public:
      Habitacion() = default;
      Habitacion(int numeroHabitacion, string tamHabitacion) {
        this->numeroHabitacion = numeroHabitacion;
        this->tamHabitacion = tamHabitacion;
      }
      int getnumeroHabitacion() {return numeroHabitacion;}
      string gettamHabitacion() {return tamHabitacion;}
      void setnumeroHabitacion(int numeroHabitacion) {}
      void settamHabitacion(string tamHabitacion) {}
      void vernumeroHab() {
        cout << "Numero de habitacion: " << numeroHabitacion << endl;
      }
      void vertamHabitacion() {
        cout << "Tam habitacion: " << tamHabitacion << endl;
      }
};

class Huesped {
  private:
      string nombreHuesped;
      string telefonoHuesped;
      float cuentaHuesped;
      Habitacion habitacion;
  public:
      Huesped() = default;
      Huesped(string nombreHuesped, string telefonoHuesped, float cuentaHuesped, Habitacion& habitacionH) {
        this->nombreHuesped = nombreHuesped;
        this->telefonoHuesped = telefonoHuesped;
        this->cuentaHuesped = cuentaHuesped;
        this->habitacion = habitacionH;
      }
      string getnombreHuesped() {return nombreHuesped;}
      string gettelefonoHuesped() {return telefonoHuesped;}
      float getcuentaHuesped() {return cuentaHuesped;}
      void setnombreHuesped(string nombreHuesped) {}
      void settelefonoHuesped(string telefonoHuesped) {}
      void setcuentaHuesped(float cuentaHuesped) {}
      void vernombreH() {
        cout << "Nombre huesped: " << nombreHuesped << endl;
      }
      void vertelefonoH() {
        cout << "Telefono huesped: " << telefonoHuesped << endl;
      }
      void vercuentaH() {
        cout << "Cuenta huesped: " << cuentaHuesped << endl;
      }
      void verHabitacion() {
        cout << "Habitacion: " << habitacion.getnumeroHabitacion() << endl;
      }
};

class Empleado {
private:
    string nombreEmpleado;
    string matriculaEmpleado;
    float salarioEmpleado;
public:
    Empleado() = default;
    Empleado(string nombreEmpleado, string matriculaEmpleado, float salarioEmpleado) {
      this->nombreEmpleado = nombreEmpleado;
      this->matriculaEmpleado = matriculaEmpleado;
      this->salarioEmpleado = salarioEmpleado;
    }
    string getnombreEmpleado() {return nombreEmpleado;}
    string getmatriculaEmpleado() {return matriculaEmpleado;}
    float getsalarioEmpleado() {return salarioEmpleado;}
    void setnombreEmpleado(string nombreEmpleado) {}
    void setmatriculaEmpleado(string matriculaEmpleado) {}
    void setsalarioEmpleado(float salarioEmpleado) {}
    void vernombreE() {
      cout << "Nombre empleado: " << nombreEmpleado << endl;
    }
    void vermatriculaE() {
      cout << "Matricula empleado: " << matriculaEmpleado << endl;
    }
    void versalarioE() {
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
    string getnombrePlatillo() {return nombrePlatillo;}
    string getingrediente() {return ingrediente;}
    float getprecioPlatillo() {return precioPlatillo;}
    void setnombrePlatillo(string nombrePlatillo) {}
    void setingrediente(string ingrediente) {}
    void setprecioPlatillo(float precioPlatillo) {}
    void vernombreP() {
      cout << "Nombre platillo: " << nombrePlatillo << endl;
    }
    void verIngrediente() {
      cout << "Ingredientes: " << ingrediente << endl;
    }
    void verprecioP() {
      cout << "Precio: " << precioPlatillo << endl;
    }
};
