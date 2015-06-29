#include <iostream>
const int Max = 5;
double * fill_array (double * begin,int limit);
void show_array (double * begin, double * end1);
void revalue (double r, double * begin, double * end1);
int main(){

	using namespace std;
	double properties[Max];

	double * end = fill_array(properties,Max);
	show_array (properties,end);
	cout<<"Enter revaluation factor: ";
	double factor;
	cin>>factor;
	revalue(factor,properties,end);
	show_array(properties,end);
	cout << "Done.\n";
	return 0;
}
void revalue (double r,double * begin, double * end1){

	for (double * j = begin;j<end1;j++)
		*j = *(j) * r;
}

	

double * fill_array (double * begin,int limit){
	using namespace std;
	const int * pt;
	double temp;
	int i;
	double * end;
	for (i = 0;i<limit;i++){
		cout << "Enter value #"<< (i+1)<<": $";
		cin >>temp;
		if(!cin){
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input:input process terminated.\n";
			break;
		}

		
		else if (temp<0)
			break;
		*(begin+i)=temp;
	}
	     end = begin + i;

	     return end;


}

void show_array(double * begin, double * end1){
	using namespace std;
	int k = 0;
	for (double * i = begin; i<end1;i++){
		//cout <<endl;
		cout << "Properties #"<<(k++)<<": $";
		cout << *(i)<<endl;
		}


}