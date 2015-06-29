#include <iostream>
#include <cctype>

using namespace std;


int main(){

	float tvarps;
	cout<<"Enter your income: ";
	cin>>tvarps;
	float income = 0;
	float tax = 0;
	while(tvarps>0){
		income = tvarps;
		if (income>35000)
			{tax = (income-35000)*0.2+10000*0.1+20000*0.15;
			//income = 35000;
			 }

		else if (income >15000&&income<=35000)
		{

			tax = (income - 15000)*0.15 + 10000*0.1;
		}
		else if (income > 5000 && income <= 15000)
			tax = (income - 5000) *0.1;
		else 
			tax = 0;
		tvarps = 0;

		cout<<"tax is: "<<tax<<endl;
		cout<<"Next income: ";
		cin>>tvarps;
	}



	return 0;
}