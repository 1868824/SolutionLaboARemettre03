// But: Le programme permet � l'utilisateur de deviner un chiffre entre 0 et 100
// Auteur: Charles Beauchamp
// Date: 13-09-2021

#include <iostream>
#include <time.h>
using namespace std;



int main()
{
   setlocale(LC_ALL, "");



   const int NB_TEST = 5;
   int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
   int estimation;
   int tentativerestante;
   int constante;



   srand(time(0)); // pour activer l�al�atoire dans le programme
   random = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans random
   cout << "Devin� le nombre al�atoirement choisi par l'ordinateur\n";



   constante = NB_TEST;
   while (constante > 0)
   {
      cout << "Veuillez entrer un nombre entre 0 et 100: ";
      cin >> estimation;



      constante--;



      if (estimation == random)
      {
         cout << "F�licitation, vous �tes tomb� dessus." << endl;
         break;
      }
      else
      {
         tentativerestante = constante;
         cout << "Loup�, il vous reste " << tentativerestante << " tentative(s)" << endl;
      }
      if (tentativerestante == 0)
      {
         cout << "Vous avez perdu" << endl;
      }
   }
   system("pause");
}
