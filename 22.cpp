#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include "Medicine.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Medicine a;
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

    return 0;
}