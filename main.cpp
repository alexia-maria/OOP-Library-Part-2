#include<iostream>
#include<string>
#include<memory>
using namespace std;

#include "Carte.h"
#include "Caiet.h"
#include "Magazin.h"
#include "Start.h"

int main() {
    Start::begin();
   /* Carte ct("amurg", 12, "fictiune");
    Caiet ci("caiet cu 100 de file", 10, "matematica");

    ct.prezentareaProdusului();
    ci.prezentareaProdusului();

//vp apelate prin pointeri la clasa de baza

    std::shared_ptr<Produs> produs1 = std::make_shared<Carte>("rasarit", 15, "fictiune");
    std::shared_ptr<Produs> produs2 = std::make_shared<Caiet>("cu 150 de file", 10, "dictando");

    produs1->anuntReducere();
    produs2->anuntReducere();
*/

 /*  //apelarea constructorului la clasa de baza(parametrizat)
   Caiet a("cu 100 de file", 10, "matematica");
   Carte b("zane", 8, "literatura universala");

   a.prezentareaProdusului();
   b.prezentareaProdusului(); */
/*
 //Dynamic_cast-upcasting

 std::shared_ptr<Produs> p1 = std::make_shared<Carte>("basmele copilariei", 7, "literatura pentru copii");
 std::shared_ptr<Produs> p2 = std::make_shared<Caiet>("cu 50 de file", 5, "matematica");

 p1->prezentareaProdusului();
 p2->prezentareaProdusului();
*/

//Citirea si afisarea informatiilor a n obiecte
 /*int n;
    cout<<"Specificati cate produse doriti sa introduceti in baza de date ";
    cin>>n;

    Magazin M;
   // std::vector<Carte> carti;
    for(int i = 0; i < n; i++) {
        int tasta;
        cout<<"Daca doriti sa introduceti o carte, apasati tasta 1 ";
        cout<<"\nDaca doriti sa introduceti un caiet, apasati tasta 2 ";
        cin>>tasta;

        if(tasta == 1) {
           // Carte ct("basme", 10, "fictiune");
           std::string x;
           int y;
           std::string z;
           cout<<"Introduceti denumirea cartii ";
           cin>>x;

           cout<<"\nIntroduceti pretul ";
           cin>>y;

           cout<<"\nIntroduceti genul ";
           cin>>z;

          Carte ct(x, y, z);
            Carte &p1 = dynamic_cast<Carte&>(ct);
            M.adaugaProduse(p1);
            M.adaugaCarti(p1);
           // p1.prezentareaProdusului();  //merge, dar se pierde genul cartii

            std::shared_ptr<Produs> p1 = std::make_shared<Carte>(x, y, z);
            M.adaugaProduse(p1);
           // p1->prezentareaProdusului();
        }

        if(tasta == 2) {
            Caiet ci("100 foi", 5, "dictando");
            Produs &p2 = dynamic_cast<Produs&>(ci);
            std::string x;
            int y;
            std::string z;
            cout<<"Introduceti denumirea caietului ";
            cin>>x;

            cout<<"\nIntroduceti pretul ";
            cin>>y;

            cout<<"\nIntroduceti tipul ";
            cin>>z;
            std::shared_ptr<Produs> p2 = std::make_shared<Caiet>(x, y, z);
            Magazin::adaugaProduse(p2);
           // p2.prezentareaProdusului();
        }
    }

    Magazin::afiseazaProduse();
    M.cautaCarti();

*/

 //Suprascrierea operatorului =

 /* Produs p("basme", 3);
  Produs p2 = p;
  p2.prezentareaProdusului();

  Carte c("basmele copilariei", 5, "fictiune");
  Carte c2 = c;
  c2.prezentareaProdusului();

  Caiet ci("caiet cu 100 de foi", 7, "dictando");
  Caiet ci2 = ci;
  ci2.prezentareaProdusului();
    return 0;
*/
}
