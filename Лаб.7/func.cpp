#include <iostream>

void vvod(int a[100][100], int &n)
{
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> a[i][j];
		}
	}
}

bool sravn(int a[100][100], int n)
{
	int max = INT_MIN;
	int min = INT_MAX;
	int maxsum = 0;
	int minsum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];

			if (a[i][j] < min)
				min = a[i][j];
		}

	}
	while (max > 0)
	{
		maxsum += max % 10;
		max /= 10;
	}
	while (min > 0)
	{
		minsum += min % 10;
		min /= 10;
	}

	return maxsum == minsum;
}

void sort(int a[100][100], int n)
{
	int sum[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum[i] += a[i][j];
		}
	}

	for (int i1 = 0; i1 < n; i1++)
	{
		for (int i2 = i1 + 1; i2 < n; i2++)
		{
			if (sum[i1] > sum[i2])
			{
				std::swap(sum[i1], sum[i2]);
				for (int j = 0; j < n; j++)
				{
					std::swap(a[i1][j], a[i2][j]);
				}
			}
		}
	}
}

void vivod(int a[100][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << a[i][j] << ' ';
		}
		std::cout << '\n';
	}
}