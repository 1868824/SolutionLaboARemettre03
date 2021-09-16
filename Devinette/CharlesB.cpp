// But: Le programme permet à l'utilisateur de deviner un chiffre entre 0 et 100
// Auteur: Charles Beauchamp
// Date: 13-09-2021

#include <iostream>
#include <time.h>
using namespace std;



int main()
{
   setlocale(LC_ALL, "");



   const int NB_TEST = 5;
   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   int estimation;
   int tentativerestante;
   int constante;



   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random
   cout << "Deviné le nombre aléatoirement choisi par l'ordinateur\n";



   constante = NB_TEST;
   while (constante > 0)
   {
      cout << "Veuillez entrer un nombre entre 0 et 100: ";
      cin >> estimation;



      constante--;



      if (estimation == random)
      {
         cout << "Félicitation, vous êtes tombé dessus." << endl;
         break;
      }
      else
      {
         tentativerestante = constante;
         cout << "Loupé, il vous reste " << tentativerestante << " tentative(s)" << endl;
      }
      if (tentativerestante == 0)
      {
         cout << "Vous avez perdu" << endl;
      }
   }
   system("pause");
}
