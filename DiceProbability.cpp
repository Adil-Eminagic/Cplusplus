#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main()
{
	srand(time(NULL));

	int one, two, three, four, five, six, attemp, result;
	one = two = three = four = five = six = attemp = 0;

	while (attemp < 3000000)
	{
		result = rand() % 6 + 1;

		if (result == 1)
			one++;
		if (result == 2)
			two++;
		if (result == 3)
			three++;
		if (result == 4)
			four++;
		if (result == 5)
			five++;
		if (result == 6)
			six++;

		attemp++;

	}


	cout << "Number of ones is " << one << "         " << one / (double)attemp * 100 << "%" << endl;
	cout << "Number of twos is " << two << "         " << two / (double)attemp * 100 << "%" << endl;
	cout << "Number of threes is " << three << "         " << three / (double)attemp * 100 << "%" << endl;
	cout << "Number of fours is " << four << "         " << four / (double)attemp * 100 << "%" << endl;
	cout << "Number of fives is " << five << "         " << five / (double)attemp * 100 << "%" << endl;
	cout << "Number of sixes is " << six << "         " << six / (double)attemp * 100 << "%" << endl;



	return 0;
}
