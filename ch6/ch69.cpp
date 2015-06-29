#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 100;

using namespace std;
struct patron{

	string name;
	double amount;
	int grand;
};


int main(){

	char filename[SIZE];
	ifstream inFile;
	//ifstream fin;


	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	//fin.open(filename);

	if (!inFile.is_open()){
		cout << "Could not open the file "<<filename<<endl;
		cout << "Program terminating.\n";
		exit (EXIT_FAILURE);
	}

	int people;
	inFile >> people;
    
	cout <<"People :"<<people<<endl;

	char ch;
	inFile >> ch;
	int count;
	patron * ps = new patron [people];
	int i = 0;
	while (inFile.good())
	{
		count++;
		//inFile >> ps[i].name;
		getline(inFile,ps[i].name);
		//inFile >> ch;
		inFile >> ps[i].amount;
		inFile >> ch;
		

		if (ps[i].amount>1000)
			ps[i].grand = 1;
		else ps[i].grand = 0;
	i++;
	
	
	}

	
if (inFile.eof())
cout << "End of file reached.\n";
else if (inFile.fail())
cout<< "Input terminated by data dismatch.\n";
else 
cout << "Input terminated for unknown reason.\n";

if (count == 0)
	cout << "No data processed.\n";
else
	cout << "Items read :" <<count <<endl;

inFile.close();
	
	



	

	cout << "Grand Patrons: \n";
	int kk=0;
	for ( int k = 0; k < i; k++)
	{

		if (ps[k].grand == 1)
		{
				kk ++;
			cout << ps[k].name<<endl;
			cout<< ps[k].amount <<endl;
		}

		

	}
	if (kk==0)
			cout<<"None!.\n";

	int jj = 0;

	cout << "Patrons: \n";
	for ( int j = 0; j < i; j++)
	{

		if (ps[j].grand == 0)
		{
			jj++;
			cout << ps[j].name<<endl;
			cout<< ps[j].amount <<endl;
		}



	}
	if(jj==0)
			cout<<"None!.\n";
		//cout<<"jj: "<<jj<<endl;

	delete [] ps;
	return 0;
}


