#include "Medicine.h"

Medicine::Medicine()
{
    m_title = new char[10] {"undefined"};
    m_type = TYPES::other;
    m_country = new char[8] {"Ukraine"};
    m_price = 0;
}

Medicine::Medicine(const char* title, TYPES type, const char* country, float price)
{
    int sizeT = strlen(title) + 1;
    m_title = new char[sizeT];
    strcpy_s(m_title, sizeT, title);

    m_type = type;

    int sizeC = strlen(country) + 1;
    m_country = new char[sizeC];
    strcpy_s(m_country, sizeC, country);

    m_price = price;
}

Medicine::~Medicine()
{
    delete[] m_title;
    delete[] m_country;
}

void Medicine::setTitle(const char* title)
{
    if (strlen(title)>=2)
    {
        delete[] m_title;

        int sizeT = strlen(title) + 1;
        m_title = new char[sizeT];
        strcpy_s(m_title, sizeT, title);
    }
}

void Medicine::setType(TYPES type)
{
    m_type = type;
}

void Medicine::setCountry(const char* country)
{
    if (strlen(country) >= 2)
    {
        delete[] m_country;

        int sizeC = strlen(country) + 1;
        m_country = new char[sizeC];
        strcpy_s(m_country, sizeC, country);
    }
}

void Medicine::setPrice(float price)
{
    if (price>0)
    {
        m_price = price;
    }
}

const char* Medicine::getTitle() const
{
    return m_title;
}

TYPES Medicine::getType() const
{
    return m_type;
}

const char* Medicine::getCountry() const
{
    return m_country;
}

float Medicine::getPrice() const
{
    return m_price;
}

void Medicine::showInfo() const
{
}
