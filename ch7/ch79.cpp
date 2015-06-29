#include <iostream>
#include <cmath>

double add (double x,double y){

	return x+y;
}
double mul (double x,double y){
	return x*y;
}
double calculate(double x,double y,double (*pf)(double,double)){
	using namespace std;
	double q;
	q = (*pf)(x,y);
	cout<<"Result: "<<q<<endl;
	return q;

}

int main(){

	using namespace std;

	double x,y;
	cout<<"Enter two numbers: ";
	cin>>x;
	cin>>y;cout<<"add ";
	double q = calculate(x,y,add);
	cout<<"mul ";
	double c = calculate(x,y,mul);
	
	//double q = calculate(x,y,mul);
	//cout<<"Result: "<<q<<endl;
	return 0;


}
