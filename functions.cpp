#include <cmath>
#include "functions.h"
double f(double x, int variant) {
	double y;

	switch (variant)
	{
	case 0:
		if (x > 6 && x < 8)
		{
			y = pow(exp(-3 + x), 1 / 3) * (1 / (sqrt(x * x + pow(x, 4) + log10(abs(x - 1.2)))));

		}
		else if (x > -3 && x <= 0)
		{
			if (x == 0)
			{
				return 0;
			}
			y = pow(x, -6);
		}
		else
		{
			if (x > 3)
				return 999;
			if (x < -3)
				return -999;
			y = pow(x, 15) - 2;
		}

		return y;
	case 1:
		if (x > 3 && x < 10)
		{
			y = (pow(pow(log10(x), 3), 1 / 3) + 4 * x)* abs(log10(x/10.5)+1/9);
		}
		else if (x > -2 && x <= 1) 
		{
			if (x == 0)
			{
				return 2;
			}
			y = pow(x, -25) + 2;
		}
		else 
		{
			y = pow(x, -30);
		}
		return y;
	case 2:
		if (x > 5 && x < 10)
		{
			y = sqrt(pow(x*x + pow(exp(4-x), 1 / 3), 1 / 5)) + log10(abs(2*x - 4.5));
		}
		else if(x > -1 && x <= 5)
		{
			y = x * x + 3;
		}
		else 
		{
			y = pow(x, -10);
		}
		return y;
	case 3:
		if (x > 1 && x < 2)
		{
			y = (sqrt(8 * x) * pow(sin(5 * x), 2) - 4.3) / (pow(x, 1 / 3) + exp(2 * x) + abs(sin(2 * x)));
		}
		else if(x > -3 && x <= 1)
		{
			if (abs(x) <= 0.3 || x < -1.5)
				return -2;
			y = pow(x, -15) - 2;
		}
		else 
		{
			if (x > 3)
				return 999;
			if (x < -3)
				return -999;
			y = -(x / x) * 999;//pow(x, 15) - 4;
		}
		return y;
	default:
		return 0;
	}
}

//double f(double x) {
//	return cos(x);
//}