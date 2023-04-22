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


	bool flag = false;
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			int temp = arr[i - 1];

			arr[i - 1] = arr[i];
			arr[i] = temp;

			flag = true;
			if (flag == true)
			{
				i = 0;
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}