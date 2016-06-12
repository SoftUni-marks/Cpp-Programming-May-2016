#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <iomanip>

#include "CCompany.h"
#include "CBuilding.h"

int main()
{
	// companies in first building
	std::vector<CCompany> companiesInFirstBuilding = {
		{"XYZ industries", 600}
	};

	// companies in second building
	std::vector<CCompany> companiesInSecondBuilding = {
		{"Rapid Development Crew", 822}
	};

	// companies in third building
	std::vector<CCompany> companiesInThirdBuilding = {
		{"SoftUni", 200 }
	};

	std::vector<CBuilding> businessPark = {
		// building 1: 6 floors, 127 offices, (600 employees + 196 free working seats) = 796 working seats
		{"XYZ industries", 6, 0, 127, 796, companiesInFirstBuilding},

		// building 2: 8 floors (1 occupied by restaurant), 210 offices, (822 + 85) = 907 working seats
		{"Rapid Development Crew", 8, 1, 210, 907, companiesInSecondBuilding},

		// building 3: 11 floors, 106 offices, (200 + 60) = 260 working seats
		{"SoftUni", 11, 0, 106, 260, companiesInThirdBuilding }
	};

	std::string buildingWithMostEmployees;
	unsigned int mostEmployees = 0;

	std::string buildingWithMostFreePlaces;
	unsigned int mostFreePlaces = 0;

	std::string buildingWithHighestCoefficientEmployeesPerWorkingSeats;
	double highestCoefficientEmployeesPerWorkingSeats = std::numeric_limits<double>::min();

	std::string buildingWithMostPeoplePerFloor;
	double mostPeoplePerFloor = std::numeric_limits<double>::min();

	std::string buildingWithLeastPeoplePerFloor;
	double leastPeoplePerFloor = std::numeric_limits<double>::max();

	std::string buildingWithMostOfficesPerFloor;
	double mostOfficesPerFloor = std::numeric_limits<double>::min();

	std::string buildingWithLeastOfficesPerFloor;
	double leastOfficesPerFloor = std::numeric_limits<double>::max();

	std::string buildingWithMostPeoplePerOffice;
	double mostPeoplePerOffice = std::numeric_limits<double>::min();

	std::string buildingWithLeastPeoplePerOffice;
	double leastPeoplePerOffice = std::numeric_limits<double>::max();

	for (size_t i = 0; i < businessPark.size(); i++)
	{
		unsigned int employees = businessPark[i].getEmployees();
		unsigned int freePlaces = businessPark[i].getFreePlaces();
		double employeesPerWorkingSeats = employees / (double)businessPark[i].getWorkingSeats();
		double peoplePerFloor = businessPark[i].getPeoplePerFloor();
		double officesPerFloor = businessPark[i].getOfficesPerFloor();
		double peoplePerOffice = businessPark[i].getPeoplePerOffice();

		if (employees > mostEmployees)
		{
			mostEmployees = employees;
			buildingWithMostEmployees = businessPark[i].getName();
		}

		if (freePlaces > mostFreePlaces)
		{
			mostFreePlaces = freePlaces;
			buildingWithMostFreePlaces = businessPark[i].getName();
		}

		if (employeesPerWorkingSeats > highestCoefficientEmployeesPerWorkingSeats)
		{
			highestCoefficientEmployeesPerWorkingSeats = employeesPerWorkingSeats;
			buildingWithHighestCoefficientEmployeesPerWorkingSeats = businessPark[i].getName();
		}

		if (peoplePerFloor > mostPeoplePerFloor)
		{
			mostPeoplePerFloor = peoplePerFloor;
			buildingWithMostPeoplePerFloor = businessPark[i].getName();
		}

		if (peoplePerFloor < leastPeoplePerFloor)
		{
			leastPeoplePerFloor = peoplePerFloor;
			buildingWithLeastPeoplePerFloor = businessPark[i].getName();
		}

		if (officesPerFloor > mostOfficesPerFloor)
		{
			mostOfficesPerFloor = officesPerFloor;
			buildingWithMostOfficesPerFloor = businessPark[i].getName();
		}

		if (officesPerFloor < leastOfficesPerFloor)
		{
			leastOfficesPerFloor = officesPerFloor;
			buildingWithLeastOfficesPerFloor = businessPark[i].getName();
		}

		if (peoplePerOffice > mostPeoplePerOffice)
		{
			mostPeoplePerOffice = peoplePerOffice;
			buildingWithMostPeoplePerOffice = businessPark[i].getName();
		}

		if (peoplePerOffice < leastPeoplePerOffice)
		{
			leastPeoplePerOffice = peoplePerOffice;
			buildingWithLeastPeoplePerOffice = businessPark[i].getName();
		}
	}

	std::cout << "         Building with most employees: \"" << buildingWithMostEmployees << "\" ("
		<< mostEmployees << " employees)" << std::endl;
	std::cout << "       Building with most free places: \"" << buildingWithMostFreePlaces << "\" ("
		<< mostFreePlaces << " free places)" << std::endl;

	std::cout << "  Building with highest coefficient (employees/workingSeats): \"" <<
		buildingWithHighestCoefficientEmployeesPerWorkingSeats << "\" (" << highestCoefficientEmployeesPerWorkingSeats
		<< " employees/workingSeats)" << std::endl;

	std::cout << "  Building with most people per floor: \"" << buildingWithMostPeoplePerFloor << "\" ("
		<< mostPeoplePerFloor << " people per floor)" << std::endl;
	std::cout << " Building with least people per floor: \"" << buildingWithLeastPeoplePerFloor << "\" ("
		<< leastPeoplePerFloor << " people per floor)" << std::endl;

	std::cout << " Building with most offices per floor: \"" << buildingWithMostOfficesPerFloor << "\" ("
		<< mostOfficesPerFloor << " offices per floor)" << std::endl;
	std::cout << "Building with least offices per floor: \"" << buildingWithLeastOfficesPerFloor << "\" ("
		<< leastOfficesPerFloor << " offices per floor)" << std::endl;

	std::cout << " Building with most people per office: \"" << buildingWithMostPeoplePerOffice << "\" ("
		<< mostPeoplePerOffice << " people per office)" << std::endl;
	std::cout << "Building with least people per office: \"" << buildingWithLeastPeoplePerOffice << "\" ("
		<< leastPeoplePerOffice << " people per office)" << std::endl;

	system("pause");

	return 0;
}