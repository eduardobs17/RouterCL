#ifndef TABLA_H
#define TABLA_H

#include <iostream>

using namespace std;

class Tabla {
public:
    Tabla();
    void llenarTabla();
    string idRed[6];
    string idSalida[6];
    int dist[6];
};

#endif //TABLA_H