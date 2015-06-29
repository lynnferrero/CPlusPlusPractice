#include <iostream>

using namespace std;

const int strsize = 30;
struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;

};



void display(string n){


	cout<<"display by "<<n<<".\n";
}

int main()
{	cout<<"a. ";display("name");
	cout<<"b. ";display("title");
	cout<<"c. ";display("bopname");
	cout<<"d. ";display("preference");
	cout<<"q. quit"<<endl;

	cout<<"Enter your choice: ";
	char choice;
	cin>>choice;

	bop list[] ={

		{"WimpMacho","A","x",0},
		{"Raki Rhodes","Junior Programmer","y",1},
		{"Celia Laiter","C","MIPS",2},
		{"Hoppy Hipman","Analyst Trainee","Y",1},
		{"Pat Hand","Manager","LOOPY",2}
	};
	while(choice!='q'){

	switch (choice){


		case 'a':{for(int i=0;i<5;i++)cout<<list[i].fullname<<endl;};break;
		case 'b':{for(int i=0;i<5;i++)cout<<list[i].title<<endl;};break;
		case 'c':{for(int i=0;i<5;i++)cout<<list[i].bopname<<endl;};break;
		case 'd':{for(int i=0;i<5;i++){switch(list[i].preference){

					case 0:cout<<list[i].fullname<<endl;break;
					case 1:cout<<list[i].title<<endl;break;
					case 2:cout<<list[i].bopname<<endl;break;
				}
		//case 'q':cout<<"Bye\n";
	}}
}	cout<<"Next choice: ";
	cin>>choice;
}
cout<<"Bye!\n";

return 0;


}