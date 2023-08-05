/*Autore: Stefano Buscema; Classe 2DS; Data: 5/8/23*/

#include <iostream>
#include <string>

int main() {
    int n = 0, QT_num_pos = 0, QT_num_neg = 0, QT_num_pari = 0, QT_num_dispari = 0;
    float input = 0;

    std::cout<<"Quanti numeri vuoi controllare? ";
    std::cin>>n;

    while (n < 0)
    {
        std::cout<<"Numero non valido, inserire un numero positivo: ";
        std::cin>>n;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout<<"Inserire un numero: ";
        std::cin>>input;

        if (input < 0)
        {
            QT_num_neg++;
        }
        else
        {
            QT_num_pos++;
        }

        // Type casting per evitare l'errore "expression must have integral or unscoped enum type"
        if ((int)input % 2 == 0)
        {
            QT_num_pari++;
        }
        else 
        {
            QT_num_dispari++;
        }
    }

    std::cout<<"La quantità di numeri negativi è: " <<QT_num_neg<<std::endl;
    std::cout<<"La quantità di numeri positivi è: " <<QT_num_pos<<std::endl;
    std::cout<<"La quantità di numeri pari è: " <<QT_num_pari<<std::endl;
    std::cout<<"La quantità di numeri dispari è: "<<QT_num_dispari<<std::endl;
}