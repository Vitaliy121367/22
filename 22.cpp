#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include "Medicine.h"
#include "Pharmacy.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Medicine b("Aspirin",TYPES::pills,"India",20.99);
    Medicine c("Nurofen",TYPES::capsules,"Italy",34.56);
    const Medicine d("Dr. MOM", TYPES::syrope, "France", 150.70);

    /*a.showInfo();
    b.showInfo();
    c.showInfo();

    d.showInfo();

    cout << "-------------------------------------------------------\n\n";

    Medicine k = b;
    k.setTitle("Aspirin Forte");

    b.showInfo();
    k.showInfo();

    cout << "-------------------------------------------------------\n\n";

    a = d;
    a.setCountry("Idia");
    a.setPrice(200.45);

    a.showInfo();
    d.showInfo();*/

    Pharmacy pharm;
    pharm.addMedicine(b);
    pharm.addMedicine(c);
    pharm.addMedicine(d);
    pharm.addMedicine(Medicine("Aspirin Forte", TYPES::pills, "India", 18.99));

    pharm.showInfo();

    cout << "-------------------------------------------------------\n\n";
    pharm.findMedByTitle("Nurofen");
    pharm.findMedByTitle("Analgin");
    cout << "-------------------------------------------------------\n\n";
    pharm.sortMedByTitle();
    pharm.showInfo();
    cout << "-------------------------------------------------------\n\n";
    pharm.sortMedByPrice();
    pharm.showInfo();
    cout << "-------------------------------------------------------\n\n";
    pharm.setName("pharm +");
    pharm.setAddress("Khiev");
    pharm.showInfo();

    return 0;
}