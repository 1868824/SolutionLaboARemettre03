//But: Le programme entre les ventes brutes hebdomadaires de chaque représentant et calcule et
//affiche son salaire. Entrez - 1 à la valeur des ventes pour quitter le programme.
//Auteur: Charles Beauchamp
//Date: 14-09-2021




#include <iostream>
using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   //Constante
   const double POURCENTAGE_DE_REVENUE = 0.075;
   const float SALAIRE = 250;
   const int NB_REPRESENTANT = 5; //À changer au besoin

   //Variable
   float vente;
   float salaire;

   cout << "Veuillez entrer votre ciffre de vente: ";
   cin >> vente;

   while (vente > 0)
   {
      salaire = vente * POURCENTAGE_DE_REVENUE + SALAIRE;
      cout << "Votre salaire est de " << salaire << "$\n";

      cout << "Veuillez entrer votre ciffre de vente: ";
      cin >> vente;
   }
   system("pause");
}
