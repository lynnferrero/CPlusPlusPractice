#include <iostream>
using namespace std;
void output (const string & str){

	cout << "String"<<str<<endl;
}
void output (const string & str,int n){
	if(n)
	cout << "String: "<<str<<endl;
}

int main()

{

	using namespace std;
	string trip = "Miami!";
	output(trip);
	output(trip,1);
	output(trip,2);
	return 0;

}

