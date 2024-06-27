#include "Pharmacy.h"

Pharmacy::Pharmacy()
{
    m_name = new char[11] {"Pharm 911"};
    m_address = new char[8] {"Kharkiv"};
    m_sizeMed = 0;
    m_arrMed = nullptr;
}

Pharmacy::Pharmacy(const char* name, const char* address)
{
    int sizeN = strlen(name) + 1;
    m_name = new char[sizeN];
    strcpy_s(m_name, sizeN, name);

    int sizeA = strlen(address) + 1;
    m_address = new char[sizeA];
    strcpy_s(m_address, sizeA, address);

    m_sizeMed = 0;
    m_arrMed = nullptr;
}

Pharmacy::~Pharmacy()
{
    delete[] m_name;
    delete[] m_address;
    if (m_arrMed != nullptr) delete[] m_arrMed;
}

void Pharmacy::setName(const char* name)
{
    if (strlen(name) >= 2)
    {
        delete[] m_name;

        int sizeT = strlen(name) + 1;
        m_name = new char[sizeT];
        strcpy_s(m_name, sizeT, name);
    }
}

void Pharmacy::setAddress(const char* address)
{
    if (strlen(address) >= 2)
    {
        delete[] m_address;

        int sizeT = strlen(address) + 1;
        m_address = new char[sizeT];
        strcpy_s(m_address, sizeT, address);
    }
}

const char* Pharmacy::getName() const
{
    return m_name;
}

const char* Pharmacy::getAddress() const
{
    return m_address;
}

void Pharmacy::addMedicine(Medicine obj)
{
    addItemBack(m_arrMed, m_sizeMed, obj);
}

void Pharmacy::findMedByTitle(const char* title) const
{
    for (int i = 0; i < m_sizeMed; i++)
    {
        if (strcmp(title, m_arrMed[i].getTitle()) == 0) {
            m_arrMed[i].showInfo();
            return;
        }
    }
    cout << "Not found: " << title << endl;
}

void Pharmacy::sortMedByPrice()
{
    sort_if<Medicine>(m_arrMed, m_sizeMed, [](Medicine a, Medicine b) {
        return a.getPrice() > b.getPrice();
    });
}

void Pharmacy::sortMedByTitle()
{
    sort_if<Medicine>(m_arrMed, m_sizeMed, [](Medicine a, Medicine b) {
        return strcmp(a.getTitle(),b.getTitle())>0;
        });
}

void Pharmacy::showInfo() const
{
    cout << "\tPharm: " << m_name << endl;
    cout << "\tAddress: " << m_address << endl;
    cout << "\tSize Med: " << m_sizeMed << endl;
    for (int i = 0; i < m_sizeMed; i++)
    {
        cout << "\t#" << i + 1 << " medicine\n";
        m_arrMed[i].showInfo();
    }
}
