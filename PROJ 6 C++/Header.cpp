#include "Header.h"
#include <iostream>

using namespace std;

Temps::Temps()
{
    this->heure   = 0;
    this->minute  = 0;
    this->seconde = 0;

}

void Temps::remplissage()
{
    int h;
    int m;
    int s;

    do {

        cout << "heure -> ";
        cin >> h;
        cout << endl;

    } while (h > 23 || h < 0);


    do
    {

        cout << "minute -> ";
        cin >> m;
        cout << endl;


    } while (m > 60 || m < 0);


    do
    {

        cout << "seconde -> ";
        cin >> s;
        cout << endl;

    } while (s > 60 || s < 0);


    this->heure   = h;
    this->minute  = m;
    this->seconde = s;

}

bool Temps::inferieur(Temps ts)
{

    if (this->heure < ts.heure) {
        return  true;
    }

    else if (this->heure > ts.heure) {

        return false;
    }

    else if (this->heure == ts.heure) {

        if (this->minute < ts.minute) {

            return true;
        }

        else if (this->minute > ts.minute) {

            return false;

        }
     
        else if (this->minute == ts.minute){


            if (this->seconde < ts.seconde) {

                return true;

            }

            else
            {

                return false;

            }


        }
    

    }

   
}

void Temps::afficher()
{
    string ch;
    string fr = "F";
    string an = "A";

    cout << "'A' : Anglaise ou 'F' : Francaise -> " ;
    cin >> ch;

    if (ch == fr)
    {
         
        cout << this->heure   << " : ";
        cout << this->minute  << " : ";
        cout << this->seconde << endl;


    }

    else if (ch == an)
    
    {

        if (this->heure == 00) {

           int h = 12;

            cout << h   << " : ";
            cout << this->minute  << " : ";
            cout << this->seconde << " Am " << endl;

        }

        else if (this->heure < 12) {

            cout << this->heure << " : ";
            cout << this->minute << " : ";
            cout << this->seconde << " Am " << endl;


        }

        else if (this->heure == 12) {

            cout << this->heure << " : ";
            cout << this->minute << " : ";
            cout << this->seconde << " Pm " << endl;


        }

        else if (this->heure > 12) {

            int h = this->heure - 12;
            cout << h << " : ";
            cout << this->minute << " : ";
            cout << this->seconde << " Pm " << endl;


        }


    }
 

}

void Temps::Comparer()
{

    Temps ts;
    ts.heure   =13;
    ts.minute  =25;
    ts.seconde =30;

    if (this->inferieur(ts)) {

     cout << this->heure << " : " << this->minute << " : " << this->seconde << " est inferieur a 13 :25 :30" <<endl;

    }

    else
    {

     cout << this->heure << " : " << this->minute << " : " << this->seconde << " est superieur a 13 :25 :30" << endl;

    }

}
