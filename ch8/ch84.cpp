#include <iostream>
using namespace std;
#include <cstring>

struct stringy {

	char * str;
	int ct;
};
//template <class Any>
void show (stringy &a){
	using namespace std;
	cout<<a.str<<endl;
}

void show (stringy &a,int n){
	using namespace std;
	for (int i = 0;i<n;i++)
	cout<<a.str<<endl;
}
void show (char * a){
	using namespace std;
	cout<<a<<endl;
}

void show (char * a, int n){

	for (int i = 0;i<n;i++)
		cout<<a<<endl;
}
// template <class T>
// void show(Any &a, int n){
// 	using namespace std;
// 	for(int i=0;i<n;i++)
// 		cout<<a.str<<endl;
// }

void set (stringy & beany, char * testing){
	beany.ct = strlen(testing);
	beany.str = new char[sizeof(testing)];
	//strcpy(p,testing);
	int i;
	//cout <<"beany.ct: "<<beany.ct<<endl;
	for( i=0; i< beany.ct ;i++)
		beany.str[i] = testing[i];
	while (i<=beany.ct)
		beany.str[i++] = '\0';
	//cout << "i: "<<i<<endl;
	//return beany;


	}
int main(){

	stringy beany;
	char testing[] = "Reality isn't what it used to be. ";
	//cout << "Size of testing: "<<sizeof(testing)<<endl;
	//cout << "testing: "<<testing<<endl;
	set (beany,testing);
	show (beany);
	show (beany,2);

	testing[0] = 'D';
	testing[1] = 'u';
	show (testing);
	show (testing,3);
	show("Done! ");
	return 0;

}