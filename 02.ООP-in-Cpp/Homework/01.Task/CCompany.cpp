#include "CCompany.h"

CCompany::CCompany(std::string name, unsigned int employees)
{
	this->setName(name);
	this->setEmployees(employees);
}

std::string CCompany::getName()
{
	return this->name;
}

void CCompany::setName(std::string name)
{
	this->name = name;
}

unsigned int CCompany::getEmployees()
{
	return this->employees;
}

void CCompany::setEmployees(unsigned int employees)
{
	this->employees = employees;
}