#ifndef SERVER_H
#define SERVER_H
#include <string>
#include "Mensaje.h"


class Server {
    public:
        Server(int);
        void analizarPaquete(int, int);
        void error(const char*);
        void socketS(int);

    private:
        int portno;
        Mensaje* msj;
};

#endif // SERVER_H