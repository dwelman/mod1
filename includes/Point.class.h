#pragma once
# include <math.h>
# include <stdio.h>
# include <iostream>
# include <Vector3.class.h>

class Point: public Vector3
{
	private:
		int	type;
	public:
		static const int	P_LAND = 1;
		static const int	P_WATER = 2;
		static const int	P_AIR = 3;
		char		*toString();
	
		//Construct
		Point(float, float, float, int);
		Point(float, float, float);
};