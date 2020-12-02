//Proyecto integrador
//Victor Martínez Román - A01746361
//Lorena A Solís de los Santos - A01746602
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "clases.h"
using namespace std;

//Funcion para generar un numero de habitacion
int numHab() {
  char disc;
  int num;
  cout << "¿Requiere usar el lugar para discapacitados?: (Y/N) "; cin >> disc;
  switch (disc) {
    case 'Y':
      num = 1;
      return num;
    case 'N':
      srand(time(NULL));
      num = 1 + rand() % 20;
      return num;
    default:
      cout << "Opcion inválida" << endl;
      numHab();
  }
}

//Funcion para desplegar y elegir un platillo
string menuP() {
  string platillo;
  int opcion;
  cout << "Seleccione un platillo de la lista: \n";
  cout << "<1> Hamburguesa \n";
  cout << "<2> Ensalada \n";
  cout << "<3> Chilaquiles \n";
  cout << "Opcion: "; cin >> opcion;
  switch (opcion) {
    case 1:
      platillo = "Hamburguesa";
      return platillo;
    case 2:
      platillo = "Ensalada";
      return platillo;
    case 3:
      platillo = "Chilaquiles";
      return platillo;
    default:
      cout << "Opcion inválida" << endl;
      menuP();
  }
}

//Funcion para definir los ingredientes segun el platillo
string menuIngredientes(string p) {
  string ingredientes;
  if (p == "Hamburguesa") {
    ingredientes = "Pan, Carne, Queso, Jitomate, Lechuga";
    return ingredientes;
  }
  else if (p == "Ensalada") {
    ingredientes = "Lechuga, Zanahorita, Jitomate, Queso, Manzana";
    return ingredientes;
  }
  else if (p == "Chilaquiles") {
    ingredientes = "Salsa verde, Totopos, Queso, Crema, Pollo, Cebolla";
    return ingredientes;
  }
}

//Funcion para definir el precio segun el platillo
float menuPrecioPlatillos(string p) {
  float precio;
  if (p == "Hamburguesa") {
    precio = 80;
    return precio;
  }
  else if (p == "Ensalada") {
    precio = 60;
    return precio;
  }
    else if (p == "Chilaquiles") {
    precio = 90;
    return precio;
  }
}

//Funcion para la opcion Huesped
void huesped() {
  char roomServ;
  string hab;
  string nombreH;
  string telefonoH;
  string platilloN;
  string ingredientesP;
  float precioPlatillo;
  float hospedaje;
  float cuentaH;
  cout << "Bienvenido, indique a que nombre registrar su estancia: "; cin >> nombreH;
  cout << "Ingrese un número telefónico: "; cin >> telefonoH;
  cout << "¿Por cuántas noches se va a quedar?"; cin >> hospedaje;
  cout << "Indique el tipo de habitación que desea: (Chica, Mediana, Grande) "; cin >> hab;
  cout << "¿Desea añadir un platillo a su habitación?: (Y/N)"; cin >> roomServ;
  switch (roomServ) {
    case 'Y':
      platilloN = menuP();
      ingredientesP = menuIngredientes(platilloN);
      precioPlatillo = menuPrecioPlatillos(platilloN);
      break;
    case 'N':
      platilloN = "Sin platillo";
      ingredientesP = "Sin platillo";
      precioPlatillo = 0;
      break;
    default:
      cout << "Opcion inválida" << endl;
      huesped();
  }
  Platillo platillo{platilloN, ingredientesP, precioPlatillo};
  Habitacion habitacion{numHab(), hab, hospedaje};
  Huesped huesped{nombreH, telefonoH, cuentaH, habitacion, platillo};
  huesped.verNombreH();
  huesped.verTelefonoH();
  habitacion.verNumeroHab();
  habitacion.verTamHabitacion();
  platillo.verNombreP();
  platillo.verIngredientes();
  platillo.verPrecioP();
  huesped.verCuentaH();
}

//Funcion para la opcion empleado
void empleado() {
  int diaCredencial;
  int mesCredencial;
  string areaCredencial;
  string nombreEmpleado;
  string matriculaEmpleado;
  float salarioEmpleado;
  cout << "Ingrese su primer nombre: "; cin >> nombreEmpleado;
  cout << "Ingrese su matricula: "; cin >> matriculaEmpleado;
  cout << "Ingrese el dia de vencimiento de su credencial: "; cin >> diaCredencial;
  cout << "Ingrese el mes de vencimiento de su credencial: "; cin >> mesCredencial;
  cout << "Ingrese su area: (Gerencia/Limpieza) "; cin >> areaCredencial;
  if (areaCredencial == "Gerencia") {
    salarioEmpleado = 10000;
  }
  else if (areaCredencial == "Limpieza") {
    salarioEmpleado = 5000;
  }
  else {
    cout << "Ingrese un area valida" << endl;
    empleado();
  }
  Credencial credencial{diaCredencial, mesCredencial, areaCredencial};
  Empleado empleado{nombreEmpleado, matriculaEmpleado, salarioEmpleado, credencial};
  empleado.verNombreE();
  empleado.verMatriculaE();
  empleado.verSalarioE();
  empleado.verCredencial();
}

int main() {
  SetConsoleOutputCP(CP_UTF8);
  char o;
  cout << "¿Eres empleado o huésped? (E/H) "; cin >> o;
  switch (o) {
    case 'H':
      huesped();
      main();
    case 'E':
      empleado();
      main();
    default:
      cout << "Opcion inválida";
      main();
  }
}
