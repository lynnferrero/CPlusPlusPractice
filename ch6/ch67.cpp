#include <iostream>


using namespace std;

int main()
{

	string word;
	int vow = 0;
	int cons = 0;
	int other = 0;
	cout << "Enter words (q to quit) :";

	cin>>word;

	while(word != "q")
	{
		if(isalpha(word[0]))
		{

			if(word[0] == 'a'||word[0]=='i'||word[0]=='e'||word[0]=='u'||word[0]=='o')
				vow ++;
			else cons++;
		}
		else other ++;
		
		cin>>word;
	
	}

	cout << vow<<" words beginning with vowels.\n";
	cout << cons << " words beginning with consonants.\n";
	cout << other <<" others.\n";
return 0;
}