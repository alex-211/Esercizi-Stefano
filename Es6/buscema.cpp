/*Autore: Stefano Buscema; Classe: 2Ds; Data: 9/8/23*/

#include <iostream>

int main(){
    int i=0, input, input_precedente = 0, tot = 0;
    float media;

    do {
        std::cout<<"Inserisci un numero: ";
        std::cin>>input;
        tot += input;
        // input e input precedente non possono corrispondere la prima volta che il ciclo gira
        if (i != 0)
        {
            input_precedente = input;
        }
        i++; 
    }
    while (input_precedente != input);

    // Type casting per più precisione
    media = (float)tot/i;
    std::cout<<"La media dei numeri è: " << media;
}