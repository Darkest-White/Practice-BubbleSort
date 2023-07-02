#include<iostream>
using namespace std;


void fill_arr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 101;
	}
}

void print_arr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}


void bubble_sort(int arr[], const int SIZE)
{
	int length = SIZE;
	while (length != 0)
	{
		int max_index = 0;

		for (int i = 1; i < length; i++)
		{
			if (arr[i] < arr[i - 1])
			{
				int temp = arr[i - 1];

				arr[i - 1] = arr[i];
				arr[i] = temp;

				max_index = i;
			}
		}
		length = max_index;
	}
}


int main()
{
	srand(time(0));

	const int SIZE = 10;
	int arr[SIZE];

	fill_arr(arr, SIZE);

	bubble_sort(arr, SIZE);

	print_arr(arr, SIZE);
}