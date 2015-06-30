#include <iostream>
template<typename T>
T maxn(T arr[],int n){
	T large=0;
	for(int i=0;i<n;i++)
		large = (large<arr[i])?arr[i]:large;
	
	return large;
}

template<typename T>
T maxcn(char * arr[],int n){
	using namespace std;
	T large = 0;
	T largeadd=arr;
	cout<<"largeadd: "<<largeadd<<endl;
	for(int i=0;i<n;i++){
		// if(sizeof(*(arr+i))>large){
		// 	large = sizeof(*(arr+i));
		// 	cout<<"large: "<<large<<endl;
		// 	largeadd = arr+i;
		// }

	}
	
	return largeadd;
}
int main(){
	using namespace std;
	int testint[6] = {2,3,4,9,6,98};
	cout<<maxn(testint,6)<<endl;

	double testdouble[4] = {2.56,7.354,23.4,9.2};
	cout<<maxn(testdouble,4)<<endl;

	char * testchar[5] = {"mymind","say","that","outof","fmeme"};
	
	cout<<"maxn(testchar,5): "<<maxcn(testchar,5)<<endl;

	return 0;




}