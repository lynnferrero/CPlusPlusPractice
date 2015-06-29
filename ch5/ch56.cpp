#include <iostream>
#include <string>
int main()
{
	using namespace std;
	struct car
	{
		string producer;
		int year;

		
	};
	cout<<"How many cars do you wish to catalog?";
	int n;
	cin>>n;
	cin.get();
	car * ps = new car [n];

	

	for ( int i = 0; i<n;i++){

		cout <<"Car #"<<i+1<<":"<<endl;
		cout << "Please enter the make: ";
		getline(cin,ps[i].producer);
		cout << "Please enter the year made: ";
		cin>>ps[i].year;
		cin.get();
	}

	cout <<endl<< "Here is your collection: "<<endl;
	for (int i = 0; i< n ;i++)
	{

		cout<<ps[i].year<<" "<<ps[i].producer<<endl;
	}

	
	return 0;
}