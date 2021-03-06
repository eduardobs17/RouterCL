#ifndef ROUTERC_CLIENT_H
#define ROUTERC_CLIENT_H
#include <string>
#include "Tabla.h"

using namespace std;

class Client {
    public:
        Client();
        void error(const char*);
        int socketC(char*, char*, string);
        void prepararMensaje(string, string);

private:
    Tabla* t;
    char* ipC;
    char* ipL;
    char* portL;
    char* portC;
};

#endif //REDESROUTERC_CLIENT_H
