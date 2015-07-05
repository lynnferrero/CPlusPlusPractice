#include "golf.h"
#include <iostream>
#include <cstring>
using namespace std;
void setgolf(golf & g,const char * name, int hc)
{


	strcpy(g.fullname,name);
	g.handicap = hc;



}
int setgolf(golf & g){
	
	cout<<"Enter fullname: ";
	
	
	cin.get(g.fullname,Len);
	//cin.get();	
	if(! g.fullname[0]) return 0;

	cout << "Enter handicap: ";
	cin>>g.handicap;
	cin.get();
	
	return 1;

}
void showgolf(const golf & g){

	cout<<"Fullname: "<<g.fullname<<endl;
	cout<<"Handicap: "<<g.handicap<<endl;


}
void handicap(golf & g,int hc){
	g.handicap = hc;

}