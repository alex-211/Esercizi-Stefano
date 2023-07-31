/*Autore: Stefano Buscema; Classe: 2DS; Data: 31/07/23; Testo;*/

#include <iostream>

int main() {
    int n, input, maggiore, minore, differenza, totale, media;
    std::cout<<"Quanti numeri vuoi inserire?";
    std::cin>>n;
    
    int i=0;
    // inzia il ciclo, ad ogni ripetizione la variabile input viene sovrascritta
    for (i<n, i++)
    {
        std::cin>>input;
        // la prima volta che il ciclo gira le variabili maggiore e minore vengono popolate col primo input così da non dover usare una valore arbitrario
        if (i==0)
        {
            maggiore = input;
            minore = input;
        }
        
        if (input > maggiore)
        {
            maggiore = input;
        }
        
        if (input < minore)
        {
            minore = input;
        }
        
        totale += input;
    }
    media = totale/n;
    differenza = maggiore-minore;
    
    std::cout>>"Il numero maggiore è: " + maggiore;
    std::cout>>"Il numero minore è: " + minore;
    std::cout>>"La differenza tra i due è: " + differenza;
    std::cout>>"La media tra i due è: " + media;
    
    return 0;
}