#include "stdafx.h"
#include "arraySizeLargeValue.h"
#include "arraySizeSmallValue.h"
#include "arraySizeAverageValue.h"
#include <iostream>


int main()
{
	using namespace std;

	double array[] = { 4.5, 3.4, 5.6, 9.1, 6.7, 7.8 };
	int length = sizeof(array) / sizeof(array[0]);
	cout << "Largest Value: " << NLC::arraySizeLargeValue(array, length) << endl;
	cout << "Smallest Value: " << NLC::arraySizeSmallValue(array, length) << endl;
	cout << "Average Value: " << NLC::arraySizeAverageValue(array, length) << endl << endl;
	return 0;
}
