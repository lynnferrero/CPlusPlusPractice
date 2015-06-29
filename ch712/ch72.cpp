#include <iostream>
const int Max = 10;

int fill_array ( double ar[], int limit);
void show_array( const double ar[], int n);
float average  ( double ar[], int n);



int main()
{
	using namespace std;
	double golf[Max];

	int size = fill_array (golf,Max);
	show_array (golf,size);
	
	double ave =average ( golf,size);
	cout << "average is :"<< ave <<endl;
	cout << "Done.\n";
    
	return 0;
}

int fill_array ( double ar[], int limit){

	using namespace std;
	double temp;
	int i;
	for (i=0;i<limit ; i++){

		cout << "Enter value #" << (i+1)<<": ";
		cin >> temp;
		if (!cin)
		{

			cin.clear();
			while (cin.get()!= '\n')
				continue;
			cout << "Bad input:input process terminated.\n";
			break;
		}
		else if (temp<0)
			break;
		ar[i] = temp;
		}
		return i;
	}


void show_array (const double ar[], int n)
{	
	using namespace std;
	for (int i = 0;i<n;i++)
	{
		cout << "Golf #"<<(i+1)<<": ";
		cout << ar[i]<<endl;
	}
	}

	float average ( double ar[], int n){

		float sum = 0.0;
		for ( int i = 0 ;i < n ;i++)
			sum = sum + ar[i];
		return sum/n;
	}