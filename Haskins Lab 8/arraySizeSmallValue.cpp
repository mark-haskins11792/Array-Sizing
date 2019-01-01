#include "stdafx.h"
#include "arraySizeSmallValue.h"

namespace NLC
{

	 double arraySizeSmallValue(double array[], int length)
	{
		double sValue = array[0];
		for (int i = 0; i < length; i++)
		{
			if (array[i] < sValue)
				sValue = array[i];
		}
		return sValue;
	}
}
