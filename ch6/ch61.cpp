
#include <iostream>
#include <cctype>
int main()
{
    
    
    using namespace std;
    cout << "Enter text for analysis, and type @ to terminate input .\n";
    
     char ch;
     while (ch != '@')
     {
    
     	if(isalpha(ch))
     	{
    
     		if (isupper(ch))
     			cout<< char(tolower(ch));
            else {
                
                cout<<char(toupper(ch));};
     	}
     	//else continue;
     	cin.get(ch);
     }
    return 0;
}
