/*Autore: Stefano Buscema; Classe 2DS; Data: 4/8/23*/

#include <iostream>
#include <string>

int main() {
    std::string nome; 
    int lavoratori = 0, pensionati = 0, non_lavoratori = 0, n = 0, tot_lavoratori = 0, tot_pensionati = 0, tot_non_lavoratori = 0, tot_cittadini = 0; 
    float perc_lavoratori = 0, perc_pensionati = 0, perc_non_lavoratori;

    std::cout<<"Quante città vuoi inserire? ";
    std::cin>>n;

    for (int i = 0; i<n; i++)
    {
        // raccolta dati
        std::cout<<"Inserisci il nome della città numero "<<i+1<<":";
        std::cin>>nome;
        std::cout<<"Inserisci il numero di lavoratori: ";
        std::cin>>lavoratori;
        std::cout<<"Inserisci il numero di pensionati: ";
        std::cin>>pensionati;
        std::cout<<"Inserisci il numero di non lavoratori: ";
        std::cin>>non_lavoratori;

        // calcolo totale 
        tot_lavoratori += lavoratori;
        tot_pensionati += pensionati;
        tot_non_lavoratori += non_lavoratori;
        tot_cittadini += lavoratori + pensionati + non_lavoratori;

        // calcolo percentuali
        perc_lavoratori = (float)lavoratori/tot_cittadini*100;
        perc_pensionati = (float)pensionati/tot_cittadini*100;
        perc_non_lavoratori = (float)non_lavoratori/tot_cittadini*100;

        // output dati città singola
        std::cout<<"Il nome della città è: "<<nome<<std::endl;
        std::cout<<"La percentuale di lavoratori è: "<<perc_lavoratori<<"%"<<std::endl;
        std::cout<<"La percentuale di pensionati è: "<<perc_pensionati<<"%"<<std::endl;
        std::cout<<"La percentuale di non lavoratori è: "<<perc_non_lavoratori<<"%"<<std::endl;
    }

    // output dati totali
    std::cout<<"Il numero totale di lavoratori, tra tutte le città è: "<<tot_lavoratori<<std::endl;
    std::cout<<"Il numero totale di pensionati, tra tutte le città è: "<<tot_pensionati<<std::endl;
    std::cout<<"Il numero totale di non lavoratori, tra tutte le città è: "<<tot_non_lavoratori<<std::endl;

    return 0;
}