#include "Tabla.h"

/**
 * Constructor
 */
Tabla::Tabla() {
    llenarTabla();
}

/**
 * LLena la tabla con los datos actuales del router.
 */
void Tabla::llenarTabla() {
    //Banderas
    idRed[0] = {"12.0.0.0"};
    idSalida[0] = {"165.8.6.25"}; //Silvia
    dist[0] = 1;

    //Carritos
    idRed[1] = {"165.8.0.0"};
    idSalida[1] = {"DIRECTO"};
    dist[1] = 0;

    //Paletas
    idRed[2] = {"200.5.0.0"};
    idSalida[2] = {"165.8.6.25"}; //Silvia
    dist[2] = 2;

    //Bolinchas
    idRed[3] = {"140.90.0.0"};
    idSalida[3] = {"25.25.25.25"}; //Daniel
    dist[3] = 2;

    //Luces
    idRed[4] = {"25.0.0.0"};
    idSalida[4] = {"DIRECTO"};
    dist[4] = 0;

    //Legos
    idRed[5] = {"201.6.0.0"};
    idSalida[5] = {"25.25.25.25"}; //Daniel
    dist[5] = 1;
}