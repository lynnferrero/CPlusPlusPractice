#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 100;

int main(){

using namespace std;
char filename[SIZE];
ifstream inFile;

cout << "Enter name of data file: ";
cin.getline(filename, SIZE);
inFile.open(filename);

if (!inFile.is_open()){

	cout << "Could not open the file "<< filename<<endl;
	cout << "Program terminating.\n";
	exit (EXIT_FAILURE);
}

int count;
char men;
inFile >> men;
while (inFile.good())
{
	count++;
	inFile>>men;
} 


return 0;


}