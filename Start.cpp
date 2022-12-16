#include<iostream>
#include<string>
#include<memory>
using namespace std;

#include "Carte.h"
#include "Caiet.h"
#include "Magazin.h"
#include "Start.h"
#include "NuAFostGasit.h"
#include "NuAvemAceastaCarte.h"
#include "IOStream.h"

void Start::begin() {
    cout<<"Implementarea cerintelor : \n";

    cout<<"Pentru functii virtuale(pure) apelate prin pointeri la clasa de baza, apasati tasta 1\n";
    cout<<"Pentru apelarea constructorului din clasa de baza, apasati tasta 2\n";
    cout<<"Pentru suprascrierea constructorului de copiere, apasati tasta 3\n";
    cout<<"Pentru suprascriere operatorului =, apasati tasta 4\n";
    cout<<"Pentru citirea, memorarea si afisarea informatiilor a n obiecte, utilizarea dynamic_cast si a exceptiilor, apasati tasta 5\n";

    int tasta;
    cin>>tasta;
    switch(tasta) {
        case 1 : {
            std::shared_ptr<Produs> produs1 = std::make_shared<Carte>("rasarit", 15, "fictiune");
            std::shared_ptr<Produs> produs2 = std::make_shared<Caiet>("cu 150 de file", 10, "dictando");

            produs1->reducere();
            produs2->reducere();
            break;
        }

        case 2 : {
            Caiet a("Caiet cu 100 de file", 10, "matematica");
            Carte b("Povestea zanelor", 8, "literatura universala");

            a.prezentareaProdusului();
            b.prezentareaProdusului();
            break;
        }

        case 3 : {
            Caiet a("Caiet cu 100 de file", 10, "matematica");
            Carte b("Povestea zanelor", 8, "literatura universala");

            Caiet c = a;
            Carte d = b;
            c.prezentareaProdusului();
            d.prezentareaProdusului();
            break;
        }

        case 4 : {
            Caiet a("Caiet cu 100 de file", 10, "matematica");
            Carte b("Povestea zanelor", 8, "literatura universala");

            Caiet c = a;
            Carte d = b;
            c.prezentareaProdusului();
            d.prezentareaProdusului();
            break;
        }

        case 5 : {
            int n;
            cout<<"Specificati cate produse doriti sa introduceti in baza de date ";
            cin>>n;

            for(int i = 0; i < n; i++) {
                int tasta2;
                cout << "Daca doriti sa introduceti o carte, apasati tasta 1 ";
                cout << "\nDaca doriti sa introduceti un caiet, apasati tasta 2 ";
                cin >> tasta2;

                if (tasta2 == 1) {
                    std::string x;
                    int y;
                    std::string z;

                    cout << "Introduceti denumirea cartii ";
                    cin >> x;

                    cout << "\nIntroduceti pretul ";
                    cin >> y;

                    cout << "\nIntroduceti genul ";
                    cin >> z;

                    std::shared_ptr<Produs> p1 = std::make_shared<Carte>(x, y, z);
                    Magazin::adaugaProduse(p1);

                }

                else if(tasta2 == 2) {
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
            } else {
                    cout<<"Nu ati introdus o tasta corespunzatoare\n";
                }
            }

            cout<<"\n Afisarea produselor de diferite tipuri : \n\n";
            Magazin::afiseazaProduse();

            cout<<"\n Utilizarea dynamic_cast : \n\n";
            for(auto &x : Magazin::gasesteToateCartile()) {
                x->prezentareaProdusului();
            }

            cout<<"\n\n Utilizarea ezceptiilor : \n\n";
            try {
                std::cout<<"Introduceti denumirea cartii pe care vreti sa il cautati \n";
                std::string t;
                cin>>t;
                std::cout<<*Magazin::gasesteProdusulDupaDenumire(t);
            } catch (const NuAvemAceastaCarte &err) {
                std::cout<<err<<std::endl;
            }

            try {
                std::cout << "Introduceti pretul produsului pe care doriti sa il cautati \n";
                int m;
                cin >> m;
                for(auto &Produs :Magazin::gasesteProdusulDupaPret(m)) {
                    std::cout<<*Produs;
                }
            }
            catch(const NuAFostGasit &err2) {
                std::cout<<err2;
            }
            break;
        }
        default:{
            std::cout<<"Nu a fost apasata o tasta corespunzatoare!";
            break;
        }
    }
}
