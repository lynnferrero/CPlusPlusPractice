#include <iostream>
int main()
{
	using namespace std;
	float sumD,sumC;
	sumD = sumC = 100;
	int year = 0;
	while(sumD>=sumC){

		sumD = sumD + 10;
		sumC = sumC + sumC*0.05;
		year ++;
	}
	cout << "year :"<<year<< " Cleo earn more than Daphne!"<<endl;
	cout <<"Cleo: "<<sumC<<" Daphne: "<<sumD<<endl;
	
	return 0;
}