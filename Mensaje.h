#ifndef MENSAJE_H
#define MENSAJE_H
#include <vector>
#include <string>

using namespace std;

class Mensaje {
public:
    Mensaje();

    void setDirFuente(string);
    void setDirDestino(string);
    void setAccion(string);
    void setIdAccion(int);
    void setMensaje(string);
    void setPaquete(string, int);

    string getPaquete();
    vector<string> obtenerInfo();

private:
    //ipFuente
    //ipDestino
    //accion
    //idAccion
    //mensaje
    string paq;
};

#endif // MENSAJE_H