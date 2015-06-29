#include <iostream>
#include <string.h>

int main()
{
	using namespace std;


    string words;
    
    int i = 0;
    
    cout<<"Enter words (to stop, type the word done):"<<endl;
	while(words!="done"){

		cin>>words;
		cin.get();

		//cout<<words<<endl;
		i++;

			

	}

	cout << "You entered a total of "<<i-1<<" words."<<endl;
	return 0;
}