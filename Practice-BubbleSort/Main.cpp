#include<iostream>
using namespace std;


int main()
{
	srand(time(0));

	const int SIZE = 15;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
	}

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

	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}