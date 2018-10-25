// Program Cars reads a record from a file and writes
// its contents to the screen with the price member
// increased by 10%.
#include "car.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// Pre:  File dataIn has been opened.
// Post: The fields of car are read from file dataIn.
Car GetCar(ifstream& dataIn);

// Pre:  car holds a valid Car variable.
// Post: The fields of car are written to the screen,
//       appropriately labeled.
void WriteCar(Car car);

int main () {
  Car  *carPtr;     // Declare a pointer to a Car struct (This is only a pointer)
  Car car;          // Still need a car variable to hold the actual data values
  carPtr = &car;    // Point your carPtr at the memory location of car
  ifstream dataIn;
  int carCount = 0;

  dataIn.open("cars.dat");

  *carPtr = GetCar(dataIn);
  while (dataIn) {
    carPtr->price = carPtr->price * 1.10;
    WriteCar(*carPtr);
    carCount++;
    *carPtr = GetCar(dataIn);
  }

  cout << carCount << " cars processed.\n";

  return 0;
}

//*****************************************************

Car GetCar(ifstream&  dataIn) {
  Car car;
  dataIn >> car.customer.firstname >> car.customer.lastname;
  dataIn >> car.price  >> car.purchased.day
         >> car.purchased.month  >> car.purchased.year;
  dataIn.ignore(2, '\n');
  return car;
}

//*****************************************************

void  WriteCar(Car  car) {
  cout << fixed << noshowpoint << setprecision(0);
  cout << "Customer: " << car.customer.firstname << " "
                       << car.customer.lastname << endl
	   << "Price:    $" << car.price << endl
	   << "Purchased:"  << car.purchased.day << "/"
	   << car.purchased.month << "/"
	   << car.purchased.year << endl;
}
