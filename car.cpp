#include "car.h"

Car::Car(const char* b, int y, int s) {
    strcpy(brand, b);
    year = y;
    speed = s;
}

void Car::setSpeed(int s) {
    speed = s;
}

void Car::show() {
    cout << "[Car] Brand: " << brand << " | Year: " << year << " | Max Speed: " << speed << " km/h" << endl;
}
