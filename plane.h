#ifndef PLANE_H
#define PLANE_H

#include "Transport.h"

class Plane : public Transport {
public:
    Plane(const char* b, int y, int alt);
    void setAltitude(int alt);
    void show(); 
private:
    int altitude; 
};

#endif
