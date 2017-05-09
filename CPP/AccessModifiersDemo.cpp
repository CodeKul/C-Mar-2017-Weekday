//
//  AccessModifiersDemo.cpp
//  
//
//  Created by Varun on 09/05/17.
//
//

/*
 
 public
 private
 protected
 
 */

#include <iostream>

using namespace std;

class Car {
    
    int numberOfSeats;
    bool isAutomatic;
    
public:
    Car();
    Car(int, bool);
    Car(Car &);
    
    ~Car();

    void setNumberOfSeats(int);
    void setIsAutomatic(bool);
    
    int getNumberOfSeats();
    bool getIsAutomatic();
    
    void display();
    
};

Car :: Car() {
    
    numberOfSeats = 0;
    isAutomatic = false;
}

Car :: Car(int numberOfSeats, bool isAutomatic) {
    
    this->numberOfSeats = numberOfSeats;
    this->isAutomatic = isAutomatic;
}

Car :: Car(Car &car) {
    
    this->numberOfSeats = car.numberOfSeats;
    this->isAutomatic = car.isAutomatic;
}

Car :: ~Car() {
    
}

void Car :: setNumberOfSeats(int numberOfSeats) {
    this->numberOfSeats = numberOfSeats;
}

void Car :: setIsAutomatic(bool isAutomatic) {
    this->isAutomatic = isAutomatic;
}

int Car :: getNumberOfSeats() {
    return numberOfSeats;
}

bool Car :: getIsAutomatic() {
    return isAutomatic;
}

void Car :: display() {
    cout << "number of seats: " << numberOfSeats << endl << "is automatic: " << isAutomatic << endl;
}

int main() {
    
    Car simpleCar;
    simpleCar.display();
    
    Car automaticCar(4,true);
    automaticCar.display();
    
    Car twoSeaterCar(automaticCar);
    twoSeaterCar.setNumberOfSeats(2);
    twoSeaterCar.setIsAutomatic(false);
    
    twoSeaterCar.display();
    
    return 0;
}









