
#include <iostream>
#include "Date.h"
#include "Livre.h"
#include "Bibliotheque.h"


int main() {
    Date d1(2020, 3, 15);
    Date d2(2023, 1, 1);

    std::cout << (d1 == d2) << std::endl;                 
    std::cout << (d1 < d2) << std::endl;                   
    std::cout << Date::estBissextille(2020) << std::endl;  
    std::cout << Date::estValide(2025, 7, 26) << std::endl; 
    
    Date d(2020, 3, 15);

    livre l1("Le Petit Prince", "Saint-Exupery", d, 3);
    livre l2(l1);          
    livre l3("L'Etranger", "Camus", d, 2);
    l3 = l1;               

    std::cout << l1.getId() << " " << l1.getTitre() << std::endl;
    std::cout << l2.getId() << " " << l2.getTitre() << std::endl;
    std::cout << l3.getId() << " " << l3.getTitre() << std::endl;


    Date d3(2020, 3, 15);
    livre l4("Le Petit Prince", "Saint-Exupery", d3, 3);
    livre l5("L'Etranger", "Camus", d3, 2);

    Bibliotheque b;
    b += l4;
    b.ajouterlivre(l5);

    livre* p = b.rechercher("L'Etranger");
    if (p) std::cout << p->getId() << " " << p->getTitre() << std::endl;

    Bibliotheque b2(b);   



    return 0;
}