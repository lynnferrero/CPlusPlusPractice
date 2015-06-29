#include <iostream>

int factorial(unsigned int n)
{

	if(n==0) return 1;
	else return n*factorial(n-1);
}

int main()

{
	using namespace std;
	 int m;
	cout << "Enter number: ";
	while(cin>>m&&m>0){
	cout<<"Factorial is: "<<factorial(m)<<endl;
	cout<<"Next number: ";
	}
	cout<<"Done!\n";
	return 0;
}