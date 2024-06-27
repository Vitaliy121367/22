#include "Pharmacy.h"

Pharmacy::Pharmacy()
{
}

Pharmacy::Pharmacy(const char* name, const char* address)
{
}

Pharmacy::~Pharmacy()
{
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
