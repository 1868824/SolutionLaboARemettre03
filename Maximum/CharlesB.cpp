  /* But: �crivez un programme qui lit 10 nombres et qui d�termine et affiche la plus grande valeur.Le programme doit utiliser
   trois variables :
   Compteur: Variable comptant jusqu'� 10
   Nombre : Le nombre entr� par l'utilisateur
   Max : La plus grande valeur de tous les nombres
   En commentaire, � la fin de votre programme, vous �crivez votre plan de tests en mettant plusieurs s�ries de 10
   valeurs de nombres possibles et en indiquant le r�sultat escompt�.
   Auteur: Charles Beauchamp
   Date: 2021-09-13
  */

#include <iostream>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");
   
   // Nommez les constantes.
   const int NB = 10;
   //Nommez les variables
   float nb;
   float max = 0;

   cout << "Entrer un nombre";
   cin >> nb;
   max = nb;
   
   // Boucle

   for (int compteur = 1; compteur < NB; compteur++)
   {
      cout << "Entrer un nombre : ";
      cin >> nb;

      if (nb>max)
      {
         max = nb;
      }
   }

   cout << "Le plus grand nonbre est : " << max << endl;

   system("pause");


}
