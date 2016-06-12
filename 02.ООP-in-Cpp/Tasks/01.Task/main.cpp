#include <string>

class CCoordinates
{
public:
	double latitude;
	double longitude;
};

class CGeographicPosition
{
public:
	std::string name;
	CCoordinates coordinates;
};

/*
 * Define a class describing a geographic position(GPS POI) with name and position
 */

int main()
{
	return 0;
}