#include <iostream>
#include <thread>
#include "Server.h"

using namespace std;

//Puertos
//Carritos recibe de luces en 5555
//Luces recibe de carritos en 2626
//RouterLC recibe de LucesT en 20000
//LucesT recibe de RouterLC en 20001

void interfazLuces() {
    Server* sL = new Server(20000);
    sL->socketS(1);
}

void interfazCarritos() {
    Server* sC = new Server(2626);
    sC->socketS(2);
}

int main() {
    cout << endl;

    thread hiloL(interfazLuces);
    thread hiloC(interfazCarritos);

    /*bool seguir = true;
    while (seguir) {
        cout << "Router Luces - Carritos" << endl;
        cout << "Desea enviar un mensaje? 1 => si, 0 => no: ";
        int opcion;
        cin >> opcion;

        if (opcion == 0) {
            cout << "No se enviarán mensajes.";
            seguir = false;
        } else {
            Client* c = new Client();
            cout << endl << "A cual red desea enviar un mensaje?: ";
            string red;
            cin >> red;
            cout << endl << "Cual es el mensaje?: ";
            string mensaje;
            cin >> mensaje;
            c->prepararMensaje(red, mensaje);

            cout << "Desea seguir? 1 => si, 0 => no: ";
            int opcion2;
            cin >> opcion2;

            if (opcion2 == 0) {
                cout << "No se enviarán mensajes.";
                seguir = false;
            }
        }
    }*/

    hiloC.join();
    hiloL.join();
    return 0;
}