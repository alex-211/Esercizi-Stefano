/*Autore: Stefano Buscema; Classe: 2Ds; Data: 9/8/23*/

#include <iostream>

int main() {
    int input, maggiore;
    maggiore = 0;

    do {
        std::cout<<"Inserisci un numero: ";
        std::cin>>input;
        if (input > maggiore)
        {
            maggiore = input;
        }
    }
    while (input != 0);
    std::cout<<"Il numero maggiore è: " << maggiore;
}