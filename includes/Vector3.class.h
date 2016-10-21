#pragma once
# include <math.h>
# include <stdio.h>
# include <iostream>

class Vector3
{
	protected:
		float	x;
		float	y;
		float	z;

	public:
		void		setX(float x){ this->x = x; };
		void		setY(float y){ this->y = y; };
		void		setZ(float z){ this->z = z; };
		float		getX(){ return (this->x); };
		float		getY(){ return (this->y); };
		float		getZ(){ return (this->z); };
		float		vectorDist(Vector3);
		Vector3		vectorSub(Vector3);
		Vector3		vectorAdd(Vector3);
		char		*toString();
	
		//Construct
		Vector3(float, float, float);		
};