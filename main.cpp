#include <iostream>
#include <thread>
#include "Server.h"

using namespace std;

//Puertos
//Carritos recibe de luces en 9090
//Luces recibe de carritos en 2626
//Router recibe de Terminal en 20000
//Terminal recibe de Router en 20001

void interfazLuces() {
    auto * sL = new Server(20000);
    sL->socketS(1);
}

void interfazCarritos() {
    auto * sC = new Server(2626);
    sC->socketS(2);
}

int main() {
    cout << endl;

    thread hiloL(interfazLuces);
    thread hiloC(interfazCarritos);

    hiloC.join();
    hiloL.join();
    return 0;
}