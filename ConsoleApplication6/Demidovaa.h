#pragma once
#include <iostream>
using namespace std;
void _sort(int* arr, size_t len)
{
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j + 1 < len - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int SUMA(int a, int b)
{
	return a + b;
}
int ymnoj(int a, int b)
{
	return a * b;
}
int chastn(int a, int b)
{
	if (b != 0)
	{
		return a / b;
	}
}
int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int Min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int average(int a, int b)
{
	return (a + b) / 2;
}