#include <iostream>
#include <cmath>
#include "chamber.h"
#include "propellentFlow.h"
#include "injector.h"
using namespace std; 

void injectorCall () {
  cout << "Orifice Area: " << orificeArea() << " \n";
  cout << "Pressure Drop: " << pressureDrop() << " \n";
  cout << "Discharge Coefficient: " << dischargeCoefficient() << " \n";
  cout << "Injection Velocity: " << injectionVelocity() << "\n\n";
}

double orificeArea() {
  return 0;
}

double pressureDrop() {
  return 0;
}

double dischargeCoefficient() {
  return 0;
}

double injectionVelocity() {
  return 0;
}
