#include <iostream>
#include <algorithm>

template<typename T>

T max5 (T arr[]){

	T large=0;
	for(int i = 0;i<5;i++)
	large = (large<arr[i])?arr[i]:large;
	
	return large;

}
int main(){
	using namespace std;
	int testint[5] = {2,3,4,9,6};
	cout<<max5(testint)<<endl;

	double testdouble[5] = {2.56,7.354,23.5,23.4,9.2};
	cout<<max5(testdouble)<<endl;

	return 0;




}