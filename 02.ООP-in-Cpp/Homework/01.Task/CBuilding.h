#pragma once

#include <string>
#include <vector>
#include "CCompany.h"

class CBuilding
{
private:
	std::string name;
	unsigned int floors;
	unsigned int floorsWithoutOffices;
	unsigned int offices;
	unsigned int workingSeats;
	std::vector<CCompany> companies;

	void setName(std::string name);
	void setFloors(unsigned int floors);
	void setFloorsWithoutOffices(unsigned int floorsWithoutOffices);
	void setOffices(unsigned int offices);
	void setWorkingSeats(unsigned int workingSeats);
	void setCompanies(std::vector<CCompany> companies);

public:
	CBuilding(
		std::string name,
		unsigned int floors,
		unsigned int floorsWithoutOffices,
		unsigned int offices,
		unsigned int workingSeats,
		std::vector<CCompany> companies);

	std::string getName();
	unsigned int getFloors();
	unsigned int getFloorsWithoutOffices();
	unsigned int getOffices();
	unsigned int getWorkingSeats();
	std::vector<CCompany> getCompanies();

	unsigned int getEmployees();
	unsigned int getFreePlaces();

	double getPeoplePerFloor();
	double getOfficesPerFloor();
	double getPeoplePerOffice();
};