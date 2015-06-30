#include <iostream>
#include <cctype>
#include <string>
using namespace std;
  string TranUpper(string & str){
	int i=0;
	
	while(str[i]){
	str[i]=toupper(str[i]);
		i++;
	}
	return str;
	
}

int main(){

using namespace std;
cout << "Enter a string (q to quit): ";
string str;

getline(cin,str);
//cout<<TranUpper(str)<<endl;
string ch;
while(str!="q"){
	cout<<TranUpper(str)<<endl;
	//getline(cin,ch);
	cout<<"Next string (q to quit): ";
	getline(cin,str);
	//getline(cin,str);
	
	
}

cout<<"Bye!\n";
return 0;

}