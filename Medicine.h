#pragma once
#include <cstring>
#include <iostream>
using namespace std;

enum TYPES {
	other,
	pills,
	capsules,
	syrope
};

class Medicine
{
	char* m_title;
	TYPES m_type;
	char* m_country;
	float m_price;

public:
	Medicine();
	Medicine(const char* title, TYPES type, const char* country, float price);
	~Medicine();

	void setTitle(const char* title);
	void setType(TYPES type);
	void setCountry(const char* country);
	void setPrice(float price);

	const char* getTitle()const;
	TYPES getType()const;
	const char* getCountry()const;
	float getPrice()const;

	void showInfo()const;
};

