#include <iostream>

struct myarray {
    int annee ;
    std::string nom;
    double nombre;
    std::string role;
} ;

int main()
{

    struct myarray valeurs = {2019, "La Plateforme", 3.14, "Étudiants"} ;
    std::cout << "adresse de annee : " << &valeurs.annee << " - valeur de annee : " << valeurs.annee << std::endl;
    std::cout << "adresse de nom : " << &valeurs.nom << " - valeur de nom : " << valeurs.nom << std::endl;
    std::cout << "adresse de nombre : " << &valeurs.nombre << " - valeur de nombre : " << valeurs.nombre << std::endl;
    std::cout << "adresse de role : " << &valeurs.role << " - valeur de role : " << valeurs.role << std::endl;

    return 0 ;
}