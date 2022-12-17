#include <iostream>
#include "func.h"

int main() 
{
	int a[100][100];
	int n;

	vvod(a,n);

	if (sravn(a,n))
	{
		sort(a,n);
	}
	vivod(a, n);
}