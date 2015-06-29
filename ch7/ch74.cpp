#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned number1, unsigned pick1);


int main()
{

	using namespace std;
	double total, choices, total1,choice1;
	total = 47;
	choices = 5;
	total1 = 27;
	choice1 = 1;
	cout << " You have one chance in ";
	cout << probability(total, choices,total1,choice1);
	cout << " of winning.\n";

	return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned number1, unsigned pick1){
	long double result = 1.0;
	long double n;
	unsigned p;

	for ( n = numbers,p=picks;p>0; n--,p--)
		result = result * n/p;
	long double m;
	unsigned p1;

	for ( m  = number1, p1 = 1; p1>0;m--,p1-- )
		result = result * m/p1;
	return result;
}