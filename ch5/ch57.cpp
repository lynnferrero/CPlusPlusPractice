#include <iostream>
#include <string.h>

int main()
{
	using namespace std;


    char words[30];
    //string word;
    int i = 0;
    //int m;
    cout<<"Enter words (to stop, type the word done):"<<endl;
	while(strcmp (words,"done")!=0){

		cin>>words;
		cin.get();

		//cout<<words<<endl;
		//if() break;
		//m = (word!="done");
		//cout<<"word: "<<word<<"m: "<<m<<endl;
		i++;
			

	}
	cout<<endl;

	int j;
	for (j=0;j<11;j+=3)
		cout<<j;
	cout<<endl<<j<<endl;

	cout<<endl<<endl;
	int x = (1.024);
	int y;
	y = 1.024;

	cout<<"x: "<<x<<"y: "<<y<<endl;

	cout << "You entered a total of "<<i-1<<" words."<<endl;
	return 0;
}