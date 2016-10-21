#include <Map.class.h>

Map::Map(int x, int y)
{
	this->x = x;
	this->y = y;
}

Map::addPoint(float x, float y, float z)
{
	this.points.push_back(new Point(x, y, z));
	this->countPoints++;
}

Map::addPoint(float x, float y, float z, int reinterpolate)
{
	this.points.push_back(new Point(x, y, z));
	this->countPoints++;
	if (reinterpolate == M_REINTERPOLATE)
	{
		reinterpolate();
	}
}

Map::reinterpolate()
{
	
}