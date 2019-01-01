#include "stdafx.h"
#include "arraySizeLargeValue.h"

namespace NLC
{

	double arraySizeLargeValue(double array[], int length)
	{
		double lValue = 0.0;
		for (int i = 0; i < length; i++)
		{
			if (array[i] > lValue)
				lValue = array[i];
		}
		return lValue;
	}

}