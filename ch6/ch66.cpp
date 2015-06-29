#include <iostream>


using namespace std;
struct patron{

	string name;
	double amount;
	int grand;
};


int main(){
	patron * ps = new patron [20];

	cout<<"Enter patrons and amount (none to terminate).\n";
	
	cout<<"Enter patrons :"<<endl;
	cin>>ps[0].name;

	cout<<"Enter amount: "<<endl;
	cin>>ps[0].amount;
	int i=0;


	while(ps[i].name!="none"){
		i++;
		cout<<"Enter patrons :"<<endl;
	cin>>ps[i].name;

	cout<<"Enter amount: "<<endl;

	cin>>ps[i].amount;

	if (ps[i].amount>1000)
		ps[i].grand = 1;
	else ps[i].grand = 0;
	



	}

	cout << "Grand Patrons: \n";
	int kk=0;
	for ( int k = 0; k < i; k++)
	{

		if (ps[k].grand == 1)
		{
				kk ++;
			cout << ps[k].name<<endl;
			cout<< ps[k].amount <<endl;
		}

		

	}
	if (kk==0)
			cout<<"None!.\n";

	int jj = 0;

	cout << "Patrons: \n";
	for ( int j = 0; j < i; j++)
	{

		if (ps[j].grand == 0)
		{
			jj++;
			cout << ps[j].name<<endl;
			cout<< ps[j].amount <<endl;
		}



	}
	if(jj==0)
			cout<<"None!.\n";
		//cout<<"jj: "<<jj<<endl;

	delete [] ps;
	return 0;
}