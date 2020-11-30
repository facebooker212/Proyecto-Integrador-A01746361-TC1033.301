#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "clases.h"
using namespace std;

int main() {
  Habitacion habitacion{1, "chica"};
  Huesped huesped{"Victor", "5500000000", 0, habitacion};
  Platillo platillo{"Hamburguesa", "Pan, Lechuga, Carne, Queso", 150};
  Empleado empleado{"Jose", "L0000", 5000};
  huesped.verHabitacion();
  huesped.vernombreH();
  huesped.vertelefonoH();
  habitacion.vernumeroHab();
  habitacion.vertamHabitacion();
  platillo.vernombreP();
  platillo.verIngrediente();
  platillo.verprecioP();
  empleado.vernombreE();
  empleado.vermatriculaE();
  empleado.versalarioE();
}
