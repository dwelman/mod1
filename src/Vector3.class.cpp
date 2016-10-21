#include <Vector3.class.h>


//Constuct 
Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

char		*Vector3::toString()
{
	static char string[128];

	sprintf(string, "Vector3 : (%f ; %f, %f)", this->x, this->y, this->z);
	return (string);
}

/*
** Return new Vector3 object reference vector that is result of (this - argument)
*/

Vector3		Vector3::vectorSub(Vector3 vect)
{
	return (Vector3(
		this->x - vect.getX(),
		this->y - vect.getY(),
		this->z - vect.getZ()
	));
}

/*
** Return new Vector3 object reference vector that is result of (this + argument)
*/

Vector3		Vector3::vectorAdd(Vector3 vect)
{
	return (Vector3(
		this->x + vect.getX(),
		this->y + vect.getY(),
		this->z + vect.getZ()
	));
}

/*
** Return distance between this vector and vector in argument
*/

float		Vector3::vectorDist(Vector3 vect)
{
	Vector3 diff = this->vectorSub(vect);

	return (sqrtf(
		  diff.getX() *  diff.getX()
		+ diff.getY() *  diff.getY()
		+ diff.getZ() *  diff.getZ()		
		));
}
