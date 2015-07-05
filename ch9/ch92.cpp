#include <iostream>
#include <cstring>
#include <string.h>
const int ArSize = 10;
using namespace std;

void strcount(const string str);

int main()
{
	using namespace std;
	//char input[ArSize];
	char next;
	string input;

	cout<<"Enter a line: \n";
	//cin.get(input);
	getline(cin,input);

	while(input!="")
	{
		//cin.get(next);
		//while(next !='\n')
			//cin.get(next);
		strcount(input);
		cout<<"Enter next line (empty line to quit: \n";
		//cin.get(input,ArSize);
		getline(cin,input);
		
	}
	cout << "Bye\n";
	return 0;
}

void strcount (const string str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	int i = 0;

	cout<<"\""<<str<<"\" contains ";
	while(str[i]){
		i++;
		if(str[i]!=' ')count++;
	}
	//count = str.length()-1;
	total +=count;
	cout<<count<<" characters\n";
	cout<<total<<" characters total\n";

}