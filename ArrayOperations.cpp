#include<iostream>

using namespace std;

template<class T>
T min(T* arr, const int size)
{
	int min = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

template<class T>
T max(T* arr, const int size)
{
	int max = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}


template<class T>
bool isInArray(T item, T* arr, const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == item)
			return true;
	}

	return false;
}

int main()
{
	const int size = 6;

	int numbers[size] = { 28,17,105,-50,225,26 };

	cout << min(numbers, size)<<endl;
	cout << max(numbers, size) << endl;

	if (isInArray<int>(57, numbers, size))
	{
		cout << "It is in array.\n";
	}
	else
	{
		cout << "It is not in array.\n";
	}


	return 0;
}
