#include "function.h"
#include <iostream>

using namespace std;
void fill_arr(int arr[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void console_arr(int arr[], int size)
{
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << " " << arr[i];
	}
	cout << "\n";
}

void min_el(int arr[], int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	cout << "\n";
	cout << " min = " << min << endl;
}

void max_el(int arr[], int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	cout << "\n";
	cout << " max = " << max << endl;
}

void sort_arr(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}
}

void reduct_arr(int arr[], int size)
{
	int number = 0;
	cout << "\n";
	cout << " What element of array do you want to change? " << endl;
	do {
		cout << " Input correct number of selected element ";
		cin >> number;

	} while (number < 0 || number >= size);
	cout << "\n";
	cout << " Input new value ";
	cin >> arr[number];
}


// float

void fill_arr_fl(float arr[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() * static_cast<float>(100) / RAND_MAX;
	}
}

void console_arr_fl(float arr[], int size)
{
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << " " << arr[i] << " ";
	}
	cout << "\n";
}

void min_el_fl(float arr[], int size)
{
	float min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	cout << "\n";
	cout << " min = " << min << endl;
}

void max_el_fl(float arr[], int size)
{
	float max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	cout << "\n";
	cout << " max = " << max << endl;
}

void sort_arr_fl(float arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}
}

void reduct_arr_fl(float arr[], int size)
{
	int number = 0;
	cout << "\n";
	cout << " What element of array do you want to change? " << endl;
	do {
		cout << " Input correct number of selected element ";
		cin >> number;

	} while (number < 0 || number >= size);
	cout << "\n";
	cout << " Input new value ";
	cin >> arr[number];
}

//char

void fill_arr_ch(char arr[], int size)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = a[rand() % 27];
	}
}

void console_arr_ch(char arr[], int size)
{
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << " " << arr[i] << " ";
	}
	cout << "\n";
}

void min_el_ch(char arr[], int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	cout << "\n";
	cout << " min = " << char(min) << endl;
}

void max_el_ch(char arr[], int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	cout << "\n";
	cout << " max = " << char(max) << endl;
}

void sort_arr_ch(char arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}
}

void reduct_arr_ch(char arr[], int size)
{
	int number = 0;
	cout << "\n";
	cout << " What element of array do you want to change? " << endl;
	do {
		cout << " Input correct number of selected element ";
		cin >> number;

	} while (number < 0 || number >= size);
	cout << "\n";
	cout << " Input new value ";
	cin >> arr[number];
}