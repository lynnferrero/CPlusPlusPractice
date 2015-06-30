 #include <iostream>
 #include <string.h>
using namespace std;
const int SLEN = 30;
struct CandyBar
{
	char brand[SLEN];
	float weight;
	int calory;

	
};

void show(const CandyBar & snack){
	using namespace std;
	cout << "Brand: "<<snack.brand<<endl;
	cout << "Weight: "<<snack.weight<<endl;
	cout << "Calory: "<<snack.calory<<endl;
}

const CandyBar & fill(CandyBar & snack, char * str, float w, int c){
	//snack.brand = str;
	strcpy(snack.brand,str);
	 snack.weight = w;
	 snack.calory = c;
	return snack;
}

int main(){

CandyBar snack;
snack =  fill(snack,"Millennium Munch",2.85,350);
show(snack);
return 0;


}