#pragma once

#include <string>

class CCompany
{
private:
	std::string name;
	unsigned int employees;

public:
	CCompany(std::string name, unsigned int employees = 0);

	std::string getName();
	void setName(std::string name);

	unsigned int getEmployees();
	void setEmployees(unsigned int employees);
};