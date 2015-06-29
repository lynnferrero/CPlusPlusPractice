#include <iostream>
const int Max = 30;

int fill_array(double nb[],int limit);
void show_array(const double nb[], int limit);
void reverse_array(double nb[], int limit);
void reverse_array1(double nb[], int limit);
int main(){
	using namespace std;
	double nb[Max];

	int size = fill_array(nb,Max);
	cout << "size: "<<size<<endl;
	show_array(nb,size);
	cout<<endl;
	//cout <<"nb[0]: "<<nb[0]<<endl;
	reverse_array(nb,size);
	show_array(nb,size);
	cout<<endl;
	reverse_array1(nb,size);
	show_array(nb,size);
	cout<<"Done.\n";
	return 0;
}

int fill_array (double nb[], int limit){

	using namespace std;
	double temp;
	int i;
	for (i = 0 ;i<limit;i++){
		cout << "Enter value #"<<(i+1)<<": ";
		cin >> temp;
		if(!cin) //bad input
		{
			cin.clear();
			while (cin.get()!='\n')
				continue;
			cout << "Bad input: input process terminated.\n";
			break;
		}
		else if (temp <0)
			break;
		nb[i] = temp;

	}
	return i;
}

void show_array (const double nb[], int n){

	using namespace std;
	for (int i = 0; i<n ;i++)
	{
		cout << "Number # " << (i+1) << ": ";
		cout << nb[i]<<endl;
	}


}

void reverse_array  ( double nb[],int n){
	using namespace std;
	int temp1 = 0;
	for ( int j = 0; j<n/2;j++){
		//cout << "Reverse: "<<(j)<<endl;
		temp1 = nb[j];//cout<<"temp1: "<<temp1<<endl;
		nb[j] = nb[n-j-1];//cout<<"nb["<<j<<"]: "<<nb[j]<<endl;
		nb[n-j-1] = temp1;//cout<<"nb["<<(n-j-1)<<"]: "<<nb[n-j-1]<<endl;
	}
		//cout << "Number #"<<" 1: "<<nb[1]<<endl;
		//cout << "Number #"<<" 2: "<<nb[2]<<endl;
		//cout << "Number #"<<" 3: "<<nb[3]<<endl;


}
void reverse_array1 (double nb[], int n){

	using namespace std;
	int temp2;

	temp2 = nb[0];
	nb[0]=nb[n-1];
	nb[n-1]=temp2;
	

}

