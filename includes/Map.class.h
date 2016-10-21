#pragma once
# include <Point.class.h>
# include <math.h>
# include <stdio.h>
# include <iostream>

class Map
{
	private:
		Point				*map;
		int					x = 0;
		int					y = 0;
		int					pointCount = 0;
		vector<Point*>		points;
		int					interpolated = 0;
		void				reinterpolate(void);

	public:
		static const int	M_REINTERPOLATE = 1;
		void				addPoint(float , float, float);
		void				addPoint(float x, float y, float z, int reinterpolate);
		//char		*toString();
	
	//Construct
	Map(int, int);
};