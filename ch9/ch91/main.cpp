#include "golf.h"
#include <iostream>
using namespace std;
int main(){
	//extern int Len;
	char fname[Len];
	int handc;
	golf ann[10];
	
	//golf ann;

	setgolf(ann[0],"Ann Birdfee",24);
	//golf andy;
	showgolf(ann[0]);
	int n = 1;
	int em = 1;
	handicap(ann[0],100);
	showgolf(ann[0]);
	while(n<10&&em){
		em = setgolf(ann[n]);
		if(em) showgolf(ann[n]);
		n++;			
		//cout<<setgolf(ann[n])<<endl;
	}



	return 0;


}