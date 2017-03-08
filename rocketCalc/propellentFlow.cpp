#include "propellentFlow.h"
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "chamber.h"
using namespace std;


int main(int argc, char *argv[]){

  //meters
  ChamberDiameter = strtod(argv[1],NULL);
  //psi
  ChamberPressure = strtod(argv[2],NULL);

  cout << "Fuel Mass Flow (kg per s):" << fuelMassFlow() << "\n";

  cout << "Fuel Volume Flow (liter per s):" << fuelVolumeFlow() << "\n";

  cout << "Oxidizer Mass Flow (kg per s):" << oxidizerMassFlow() << "\n";

  cout << "Oxidizer Volume Flow (liter per s):" << oxidizerVolumeFlow() << "\n";

  cout << "Propellent Mass Flow (kg per s):" << propellentMassFlow() << "\n";

  cout << "Propellent Weight Flow (lb per s):" << propellentWeightFlow() << "\n";

  //call all this in other file   

  return 0;

}

double fuelMassFlow() {
  return 0.0;
}

double fuelWeightFlow() {
  return 0.0;
}

double fuelVolumeFlow() {
  return 0.0;
}

double oxidizerMassFlow() {
  return 0.0;
}

double oxidizerWeightFlow() {
  return 0.0; 
}

double oxidizerVolumeFlow() {
  return 0.0;
}

double propellentMassFlow() {
  return 0.0;
}

double propellentWeightFlow() {
  return 0.0;
}

double propellentVolumeFlow() {
  return 0.0;
}

double propellentMolecularWeight() {
  return -2.89*pow(10,-14)*pow(ChamberPressure,4) + 3.94*pow(10,-10)*pow(ChamberPressure,3) - 1.962*pow(10,-6)*pow(ChamberPressure,2) + 4.228*pow(10,-3)*ChamberPressure + 10.23;
}

