#pragma once
#include "Medicine.h"
#include "ArrayTemplate.h"

class Pharmacy
{
	char* m_name;
	char* m_address;
	int m_sizeMed;
	Medicine* m_arrMed;
public:
	Pharmacy();
	Pharmacy(const char* name, const char* address);	
	~Pharmacy();

	void setName(const char* name);
	void setAddress(const char* address);

	const char* getName()const;
	const char* getAddress()const;

	void addMedicine(Medicine obj);
	void findMedByTitle(const char* title)const;
	void sortMedByPrice();
	void sortMedByTitle();

	void showInfo()const;
};

