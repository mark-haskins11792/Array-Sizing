#include "stdafx.h"
#include "arraySizeAverageValue.h"

namespace NLC
{

	double arraySizeAverageValue(double array[], int length)
	{
		double arraysum = 0.0, avgValue = 0.0;
		for (int i = 0; i < length; i++)
		{
			arraysum += array[i];
		}
		return avgValue = arraysum / length;
	}
}
