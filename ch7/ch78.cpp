#include <iostream>
#include <string.h>
using namespace std;

const int SLEN = 30;
struct student {

	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo (student pa[], int n);

void display1 (student st);



void display2 (const student * ps);

void display3(const student pa[],int n);



int main(){

	cout << "Enter class size: ";
	int class_size;
	cin>> class_size;
	while (cin.get()!='\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	cout<<endl;
	for(int i = 0;i< entered; i++){

		display1 (ptr_stu[i]);
		cout<<endl;
		display2 (&ptr_stu[i]);

	}
	cout<<endl;
	display3 (ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}
int getinfo ( student pa[], int n){

	char temp[SLEN];
	using namespace std;
	int i;
	for (i = 0;i < n; i++)
	{
		cout << "Enter fullname: ";
		cin.get(pa[i].fullname,SLEN);
		//cout << "pa[i].fullname: "<<pa[i].fullname<<endl;

		int j = 0;
		int blank = 0;
		while(j<strlen(pa[i].fullname)){

			if(pa[i].fullname[j]!=' ')
				blank =1;
			j++;
		}

		if(blank==0)
		//{	//cout << "Done.\n";
		break;//}

		

		//while (cin.get()!='\n')
		//	continue;
		cout << "Enter hobby: ";
		cin.get();
		//getline(cin,pa[i].hobby);
		cin.get(pa[i].hobby,SLEN);
		//while (cin.get()!='\n')
		//	continue;
		cin.get();
		cout << "Enter ooplevel:";
		cin>>pa[i].ooplevel;
		cin.get();




	}
}

void display1 (student st){
	cout<<"display1"<<endl;
	cout<<"fullname: "<<st.fullname<<endl;
	cout<<"hobby: "<<st.hobby<<endl;
	cout<<"ooplevel: "<<st.ooplevel<<endl;


}
void display2 (const student * ps){
	cout <<"display2"<<endl;
	cout<<"fullname: "<<ps->fullname<<endl;
	cout<<"hobby: "<<ps->hobby<<endl;
	cout<<"ooplevel: "<<ps->ooplevel<<endl;
	
}
void display3(const student pa[],int n)
{

	cout<<"display3"<<endl;
	for(int kk=0;kk<n;kk++){
	cout<<"fullname: "<<pa[kk].fullname<<endl;
	cout<<"hobby: "<<pa[kk].hobby<<endl;
	cout<<"ooplevel: "<<pa[kk].ooplevel<<endl;
	}
}



