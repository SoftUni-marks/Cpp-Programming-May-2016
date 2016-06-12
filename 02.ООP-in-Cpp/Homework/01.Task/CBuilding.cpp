#include "CBuilding.h"

CBuilding::CBuilding(
	std::string name,
	unsigned int floors,
	unsigned int floorsWithoutOffices,
	unsigned int offices,
	unsigned int workingSeats,
	std::vector<CCompany> companies)
{
	this->setName(name);
	this->setFloors(floors);
	this->setFloorsWithoutOffices(floorsWithoutOffices);
	this->setOffices(offices);
	this->setWorkingSeats(workingSeats);
	this->setCompanies(companies);
}

std::string CBuilding::getName()
{
	return this->name;
}

void CBuilding::setName(std::string name)
{
	this->name = name;
}

unsigned int CBuilding::getFloors()
{
	return this->floors;
}

void CBuilding::setFloors(unsigned int floors)
{
	this->floors = floors;
}

unsigned int CBuilding::getFloorsWithoutOffices()
{
	return this->floorsWithoutOffices;
}

void CBuilding::setFloorsWithoutOffices(unsigned int floorsWithoutOffices)
{
	this->floorsWithoutOffices = floorsWithoutOffices;
}

unsigned int CBuilding::getOffices()
{
	return this->offices;
}

void CBuilding::setOffices(unsigned int offices)
{
	this->offices = offices;
}

unsigned int CBuilding::getWorkingSeats()
{
	return this->workingSeats;
}

void CBuilding::setWorkingSeats(unsigned int workingSeats)
{
	this->workingSeats = workingSeats;
}

std::vector<CCompany> CBuilding::getCompanies()
{
	return this->companies;
}

void CBuilding::setCompanies(std::vector<CCompany> companies)
{
	this->companies = companies;
}

unsigned int CBuilding::getEmployees()
{
	int employees = 0;

	for (size_t i = 0; i < this->companies.size(); i++)
	{
		employees += this->companies[i].getEmployees();
	}

	return employees;
}

unsigned int CBuilding::getFreePlaces()
{
	return this->workingSeats - this->getEmployees();
}

double CBuilding::getPeoplePerFloor()
{
	return this->getEmployees() / (double)(this->floors - this->floorsWithoutOffices);
}

double CBuilding::getOfficesPerFloor()
{
	return this->offices / (double)(this->floors - this->floorsWithoutOffices);
}

double CBuilding::getPeoplePerOffice()
{
	return this->getEmployees() / (double)this->offices;
}