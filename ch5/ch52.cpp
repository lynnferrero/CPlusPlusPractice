#include <iostream>
int main()
{
	using namespace std;
	int l;
	
	//cin.get();
	int sum = 0;
	while(l!=0){
		cin>>l;
		sum = sum +l ;
		cout << "l: "<<l<<endl;

		cout <<"current sum: "<<sum<<endl;

	}

	return 0;
}