// Lab_03_3.cpp
// Лазар Владислав
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double R;
	double x;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -1 - R)
	{
		y = -x;
	}
	else
	{
		if (-1 - R < x && x <= -1)
		{
			y = sqrt(R * R - (x + 1) * (x + 1));
		}
		else
		{
			if (-1 < x && x <= 1)
			{
				y = R;
			}
			else
			{
				if (1 < x && x < 2)
				{
					y = R * (2 - x) - x + 1;
				}
				else
				{
					y = -1;
				}
			}
		}
		
	}

	cout << endl; cout << "y = "; cout << y << endl;
		
	return 0;
}