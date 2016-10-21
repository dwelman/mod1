#include <Point.class.h>

Point::Point(float x, float y, float z, int type) : Vector3(x, y, z)
{
	if (this->type != P_WATER && this->type != P_LAND)
		this->type = P_AIR;
	else
		this->type = type;
}

Point::Point(float x, float y, float z) : Vector3(x, y, z)
{
}

char		*Point::toString()
{
	static char string[128];

	switch (this->type)
	{
		case P_WATER :
			sprintf(string, "Point : (%f ; %f, %f) TYPE == P_WATER", this->x, this->y, this->z);
			break;
		case P_LAND :
			sprintf(string, "Point : (%f ; %f, %f) TYPE == P_LAND", this->x, this->y, this->z);
			break;
		default :
			sprintf(string, "Point : (%f ; %f, %f) TYPE == P_AIR", this->x, this->y, this->z);
	}
	return (string);
}