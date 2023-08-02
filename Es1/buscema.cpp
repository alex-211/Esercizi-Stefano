// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int n = 0, input = 0, maggiore = 0, minore = 0, differenza = 0, totale = 0 ;
    // media dichiarata come floating point var perchè da un valore più preciso
    float media = 0;
    std::cout<<"Quanti numeri vuoi inserire? ";
    std::cin>>n;
    
    // inzia il ciclo, ad ogni ripetizione la variabile input viene sovrascritta
    for (int i = 0; i<n; i++)
    {
        std::cout<<"Inserisci un numero: ";
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
    
    std::cout << "Il numero maggiore è: " << maggiore << std::endl;
    std::cout << "Il numero minore è: " << minore << std::endl;
    std::cout << "La differenza tra i due è: " << differenza << std::endl;
    std::cout << "La media tra i due è: " << media << std::endl;

    
    return 0;
}