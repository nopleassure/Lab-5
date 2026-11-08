#ifndef CAR_H
#define CAR_H

#include "Transport.h"

class Car : public Transport {
public:
    Car(const char* b, int y, int s); 
    void setSpeed(int s); 
    void show(); 
private:
    int speed;
};

#endif
