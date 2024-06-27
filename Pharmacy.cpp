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
}

void Pharmacy::setAddress(const char* address)
{
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
}

void Pharmacy::findMedByTitle(const char* title) const
{
}

void Pharmacy::sortMedByPrice()
{
}

void Pharmacy::sortMedByTitle()
{
}
